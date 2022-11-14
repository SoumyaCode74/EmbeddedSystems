#include "General.h"
#include "systick.h"
#include "usart.h"
#include "usart2_interrupt.h"
#include "stm32f4xx.h"
#include <stdio.h>

/*#include "stm32f4xx.h"*/

/*Tested with ARM Compiler : version 5*/


/*void systickDelayMs(int n);
void LED_play(int value);
void USART2_init_instructor(void);



int main (void) {
    __disable_irq();

    RCC->AHB1ENR |=  1;
    GPIOA->MODER |=  0x404;

    USART2_init_instructor();

    USART2->CR1 |= 0x0020;          // Enable Rx interrupt
    NVIC_EnableIRQ(USART2_IRQn);
    __enable_irq();

    while(1) {
    	GPIOA->ODR ^= (1U << 1);
    	delay_time_ms(250, HSICLK);
    }

}


void USART2_init_instructor(void) {
    RCC->AHB1ENR |= 1;
    RCC->APB1ENR |= 0x20000;    // Enable USART2 clock

    GPIOA->AFR[0] |=  0x7700;   // Alt7 for USART2
    GPIOA->MODER  |=  0x0080;

    USART2->BRR = 0x008B;       // 115200 baud @ 16 MHz
    USART2->CR1 = 0x00C;       // Enable Rx, 8-bit data
    USART2->CR1 |= 0x2000;      // Enable USART2
}

void USART2_IRQHandler(void) {
    char c;

    if (USART2->SR & 0x0020) {
        c = USART2->DR;
        LED_play(c);
        NVIC_ClearPendingIRQ(38);
    }
}

void LED_play(int value) {
    value %= 16;                    // cap the max count at 15

//    printf("hello");
    for (; value > 0; value--) {
        GPIOA->BSRR = 0x00000020;   // turn on LED
        systickDelayMs(100);
        GPIOA->BSRR = 0x00200000;   // turn off LED
        systickDelayMs(100);
    }
    systickDelayMs(800);
}



void systickDelayMs(int n) {

    // Configure SysTick
    SysTick->LOAD = 16000;  // Reload with number of clocks per millisecond
    SysTick->VAL = 0;       // Clear current value register
    SysTick->CTRL = 0x5;    // Enable the timer

    for(int i = 0; i < n; i++) {

		// Wait until the COUNTFLAG is set
        while((SysTick->CTRL & 0x10000) == 0)
            { }
    }
    SysTick->CTRL = 0;
}

*/

void USART2_IRQHandler(void);
static void USART2_RX_Callback(void);
void LED_play(int);

volatile int times = 0;
volatile char c;
int main(void){
	USART2_rx_interrupt_init(HSICLK, 115200UL); //Initialize USART2 with HSI, and Baud rate 9600 bits per second

	RCC->AHB1ENR |= (1U << 0);   //Enable clock access to GPIOA
	GPIOA->MODER &= ~(3U << 2);  //Reset direction of PIN1
	GPIOA->MODER &= ~(3U << 10); //Reset direction of PIN5
	GPIOA->MODER |= (1U << 2);   //Set direction of PIN1 as output
	GPIOA->MODER |= (1U << 10);  //Set direction of PIN5 as output

	while(1)
	{
//		printf("Awaiting interrupt and toggling LED. Now: %ld\r\n",((GPIOA->ODR >> 1) & 1U));
		GPIOA->ODR ^= (1U << 1);
		delay_time_ms(250, HSICLK);
	}
}

/*
 * Obtain the interrupt handler name from the startup file
 * Define the interrupt handler and the interrupt callback functions
 */

void USART2_IRQHandler(void) //Execute ISR when IRQ38 happens
{
	if (USART2->SR & 0x0020)
	{
		USART2_RX_Callback();
		NVIC->ICPR[1] |= (1U << 6);
	}

//		USART2_RX_Callback();
//		USART2->SR &= ~(1U << 5); //Clear pending interrupt at USART2
//
}


static void USART2_RX_Callback(void)
{
	++times;
	c = USART2->DR;
	printf("Hello sugar-pie, you pressed key %c!\n\r",c);
	printf("And you disturbed me %d times!! Now stop pinging!\n\r", times);
	LED_play(c);
	/*GPIOA->ODR |= (1U << 5);
	delay_time_ms(750, HSICLK);
	GPIOA->ODR &= ~(1U << 5);*/
}


void LED_play(int value) {
    value %= 16;                    // cap the max count at 15

//    printf("hello");
    for (; value > 0; value--) {
        GPIOA->BSRR = 0x00000020;   // turn on LED
        delay_time_ms(100, HSICLK);
        GPIOA->BSRR = 0x00200000;   // turn off LED
        delay_time_ms(100, HSICLK);
    }
    delay_time_ms(500, HSICLK);
}

