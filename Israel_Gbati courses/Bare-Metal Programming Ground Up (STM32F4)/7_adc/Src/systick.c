#include "systick.h"
#include <stdint.h>

void systick_init(void){
	//Provide clock source for Systick
	SYSTICK->STCSR |= CLK_SOURCE;
	//Clear current value
	SYSTICK->STCVR = TICK_CLEAR;
	//Disable systick interrupt request
	SYSTICK->STCSR &= ~(TICK_EXCEPTION);
}
void delay_time_ms(uint32_t delay_ms, uint32_t clk)
{
	uint32_t N = (clk/1000U)*delay_ms;
	SYSTICK->STRVR = N - 1;
	systick_init();  							//Initialize counter
	SYSTICK->STCSR |= TICK_ENABLE;				//Restart counter
	while((SYSTICK->STCSR & CNT_CMPLT) == 0);   //Wait for countdown to complete
}

void delay_time_us(uint32_t delay_us, uint32_t clk)
{
	uint32_t N = (clk/1000000UL)*delay_us;
	SYSTICK->STRVR = N - 1;
	systick_init();  							//Initialize counter
	SYSTICK->STCSR |= TICK_ENABLE;				//Restart counter
	while((SYSTICK->STCSR & CNT_CMPLT) == 0);   //Wait for countdown to complete
}

void delay_time_ns(uint32_t delay_ns, uint32_t clk)
{
	uint32_t N = ((clk/1000000UL)/1000U)*delay_ns;
	SYSTICK->STRVR = N - 1;
	systick_init();  							//Initialize counter
	SYSTICK->STCSR |= TICK_ENABLE;				//Restart counter
	while((SYSTICK->STCSR & CNT_CMPLT) == 0);   //Wait for countdown to complete
}
