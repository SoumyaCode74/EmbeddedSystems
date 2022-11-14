/*
 * usart.h for stm32f401xe MCUs
 *
 *  Created on: Nov 7, 2022
 *      Author: soumy
 */

#ifndef USART_H_
#define USART_H_
#define GPIOAEN   				(1U<<0)
#define USART2EN  				(1U<<17)
#define CR1_TE					(1U<<3)
#define CR1_RE					(1U<<2)
#define CR1_UE					(1U<<13)
#define SR_TXE					(1U<<7)
#define SR_RXNE					(1U<<5)
#define BAUD_RATE_SET(x, y)		((x+(y/2U))/y)

extern void USART2_init(uint32_t PeriphClk, uint32_t BaudRate);
extern void USART2_write(int);
extern void delayMs(int delay);
int __io_putchar(int);
void uart_set_baudrate(USART_TypeDef *, uint32_t, uint32_t);
uint32_t calculate_bd(uint32_t, uint32_t);
unsigned char USART2_read(void);
void USART2_rx_interrupt_init(uint32_t, uint32_t);

#endif