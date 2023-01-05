#include "General.h"
#include "systick.h"
#include "usart.h"
#include "usart2_interrupt.h"
#include "stm32f4xx.h"
#include <stdio.h>

/*#include "stm32f4xx.h"*/

/*Tested with ARM Compiler : version 5*/

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
	printf("Hello, you pressed key %c!\n\r",c);
	printf("Times interrupted: %d\n\r", times);
	LED_play(c);
}


void LED_play(int value) {
    value %= 16;                    // cap the max count at 15
    for (; value > 0; value--) {
        GPIOA->BSRR = 0x00000020;   // turn on LED
        delay_time_ms(100, HSICLK);
        GPIOA->BSRR = 0x00200000;   // turn off LED
        delay_time_ms(100, HSICLK);
    }
    delay_time_ms(500, HSICLK);
}

