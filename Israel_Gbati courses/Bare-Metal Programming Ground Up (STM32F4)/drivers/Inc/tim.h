/*
 * tim.h
 *
 *  Created on: 11-Nov-2022
 *      Author: soumy
 */

#ifndef TIM_H_
#define TIM_H_

#define TIM2EN  (1U<<0)
#define CNTEN   (1U<<0)
#define CNTEND	(1U<<0)

void tim2_init(void);

void tim2_cont_ms(uint32_t);

void tim2_pwm_pa5(uint32_t, uint32_t);
#endif /* TIM_H_ */
