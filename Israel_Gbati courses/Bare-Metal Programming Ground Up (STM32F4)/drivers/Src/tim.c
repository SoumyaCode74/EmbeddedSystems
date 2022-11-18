/*
 * tim.c
 *
 *  Created on: 11-Nov-2022
 *      Author: soumy
 */

#include "stm32f4xx.h"
#include "tim.h"
#include "General.h"


/*Generate a timeout of 1 second, 1 update event per second, using TIM2*/
void tim2_init(void)
{
	/*Enable clock access to TIM2
	 * Set the TIM2 pre-scaler value
	*/
	RCC->APB1ENR |= TIM2EN;
	TIM2->PSC = 1600 - 1;	//With assumption that the HSI clock is acting as the system clock
}
void tim2_cont_ms(uint32_t wait_time)
{
	 /* Call the tim2_init for timer initialization
		  * Calculate the period value and load the period value to auto-reload register of TIM2
		  * Clear the current count value of TIM2
		  * Disable one pulse mode
		  * Enable TIM2
		  * Wait for counting to finish
		 */
		tim2_init();
		TIM2->ARR = (uint16_t)(wait_time*(HSICLK/(1000*(TIM2->PSC+1))) - 1); //Maximum 16-bit period allowed
		TIM2->CNT &= ~0xFFFF; //Clear counter value
		TIM2->CR1 &= ~(1U<<3);//Disable one pulse mode
		TIM2->CR1 |= CNTEN;	  //Enable counting

		while((TIM2->SR & CNTEND) == 0); //Wait for counting to finish
		TIM2->SR &= ~0x01;  //Resetting the update interrupt flag
}

void tim2_pwm_pa5(uint32_t on_time, uint32_t period)
{
	/*
	 * Enable clock access to GPIOA port
	 * Set PA5 to alternating function mode
	 * * Enable clock access to TIM2 module
	 * Set the pre-scaler value
	 * Set the on_time to TIM2_CCR
	 * Set the period to TIM2_ARR
	 * Set the TIM2 in output PWM mode
	 * Set TIM2 in up-counting mode
	 * Enable Channel 1 as output compare
	 * Clear count register
	 * Enable TIM2
	 * Wait for on-time event to occur. Reset interrupt flag
	 * Wait for period event to occur. Reset update interrupt flag
	 */
	RCC->AHB1ENR |= BIT0;
	GPIOA->MODER &= ~(BIT10 | BIT11);
	GPIOA->MODER |= BIT11;
	GPIOA->AFR[0] &= ~(BIT20 | BIT21 | BIT22 | BIT23);
	GPIOA->AFR[0] |= BIT20;

	tim2_init();
	TIM2->CCR1 = (uint16_t)(on_time*(HSICLK/(1000*(TIM2->PSC+1))) - 1);
	TIM2->ARR = (uint16_t)(period*(HSICLK/(1000*(TIM2->PSC+1))) - 1);

	TIM2->CCMR1 &= ~BIT7; //Output compare clear enable not set
	TIM2->CCMR1 &= ~(BIT6 | BIT5 | BIT4);
	TIM2->CCMR1 |=  (BIT6 | BIT5);
	TIM2->CCMR1 &= ~(BIT3 | BIT2 | BIT1 | BIT0);

	TIM2->CCER |= BIT0;
	TIM2->CNT   = 0U;
	TIM2->CR1  |= BIT0;

	while((TIM2->SR & 0x02) == 0);
	TIM2->SR  &= ~BIT1;
	while((TIM2->SR & 0x01) == 0);
	TIM2->SR  &=  ~BIT0;
}
