#include <stdio.h>
#include "General.h"
#include "adc.h"
#include "usart.h"

#define USART2EN				(1U<<17)
#define SYS_FREQ				16000000UL //Default system frequency internal RC oscillator
#define APB1_CLK				SYS_FREQ
#define UART_BAUDRATE			9600UL

uint32_t result;
uint16_t result_beforedecimal;
uint16_t result_afterdecimal;

int main(void)
{
	pa1_ADC1_init();
	USART2_init(APB1_CLK, UART_BAUDRATE);
	while(1)
	{
		result = perform_conversion();
		result_beforedecimal = (unsigned int)((5*result)/4096);
		result_afterdecimal = (unsigned int)((5*result)%4096);
		if(result_afterdecimal < 1000)
		{
			printf("Input voltage: %d.0%d V\r\n", result_beforedecimal, result_afterdecimal);
		}
		else
		{
			printf("Input voltage: %d.%d V\r\n", result_beforedecimal, result_afterdecimal);
		}

	}

}
