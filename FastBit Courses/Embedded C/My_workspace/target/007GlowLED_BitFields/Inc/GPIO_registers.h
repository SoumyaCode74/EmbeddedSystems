/*
 * GPIO_registers.h
 *
 *  Created on: Oct 22, 2022
 *      Author: soumy
 */

#ifndef GPIO_REGISTERS_H_
#define GPIO_REGISTERS_H_

#include <stdint.h>
#define ADDR_GPIOA_BASE 			0x40020000
#define ADDR_GPIOB_BASE 			0x40020400
#define ADDR_GPIOC_BASE 			0x40020800
#define ADDR_GPIOD_BASE 			0x40020C00
#define ADDR_GPIOE_BASE 			0x40021000
#define ADDR_GPIOF_BASE 			0x40021400
#define ADDR_GPIOG_BASE 			0x40021800
#define ADDR_GPIOH_BASE 			0x40021C00
#define ADDR_GPIOI_BASE 			0x40022000
#define ADDR_GPIOJ_BASE 			0x40022400
#define ADDR_GPIOK_BASE 			0x40022800

#define GPIOx_MODER_OFFSET   		0x00
#define GPIOx_OTYPER_OFFSET  		0x04
#define GPIOx_OSPEEDR_OFFSET 		0x08
#define GPIOx_PUPDR_OFFSET   		0x0C
#define GPIOx_IDR_OFFSET     		0x10
#define GPIOx_ODR_OFFSET     		0x14
#define GPIOx_BSRR_OFFSET    		0x18
#define GPIOx_LCKR_OFFSET    		0x1C
#define GPIOx_AFRL_OFFSET    		0x20
#define GPIOx_AFRH_OFFSET    		0x24

#define PIN_SET_HIGH				0x01
#define PIN_SET_LOW					0x00

typedef struct
{
	uint32_t moder0 :2;
	uint32_t moder1 :2;
	uint32_t moder2 :2;
	uint32_t moder3 :2;
	uint32_t moder4 :2;
	uint32_t moder5 :2;
	uint32_t moder6 :2;
	uint32_t moder7 :2;
	uint32_t moder8 :2;
	uint32_t moder9 :2;
	uint32_t moder10 :2;
	uint32_t moder11 :2;
	uint32_t moder12 :2;
	uint32_t moder13 :2;
	uint32_t moder14 :2;
	uint32_t moder15 :2;

}GPIOx_MODER_t;
typedef struct
{
	uint32_t ot0 :1;
	uint32_t ot1 :1;
	uint32_t ot2 :1;
	uint32_t ot3 :1;
	uint32_t ot4 :1;
	uint32_t ot5 :1;
	uint32_t ot6 :1;
	uint32_t ot7 :1;
	uint32_t ot8 :1;
	uint32_t ot9 :1;
	uint32_t ot10 :1;
	uint32_t ot11 :1;
	uint32_t ot12 :1;
	uint32_t ot13 :1;
	uint32_t ot14 :1;
	uint32_t ot15 :1;
	uint32_t reserved :15;
}GPIOx_OTYPER_t;
typedef struct
{
	uint32_t ospeedr0 :2;
	uint32_t ospeedr1 :2;
	uint32_t ospeedr2 :2;
	uint32_t ospeedr3 :2;
	uint32_t ospeedr4 :2;
	uint32_t ospeedr5 :2;
	uint32_t ospeedr6 :2;
	uint32_t ospeedr7 :2;
	uint32_t ospeedr8 :2;
	uint32_t ospeedr9 :2;
	uint32_t ospeedr10 :2;
	uint32_t ospeedr11 :2;
	uint32_t ospeedr12 :2;
	uint32_t ospeedr13 :2;
	uint32_t ospeedr14 :2;
	uint32_t ospeedr15 :2;
}GPIOx_OSPEEDR_t;
typedef struct
{
	uint32_t pupdr0 :2;
	uint32_t pupdr1 :2;
	uint32_t pupdr2 :2;
	uint32_t pupdr3 :2;
	uint32_t pupdr4 :2;
	uint32_t pupdr5 :2;
	uint32_t pupdr6 :2;
	uint32_t pupdr7 :2;
	uint32_t pupdr8 :2;
	uint32_t pupdr9 :2;
	uint32_t pupdr10 :2;
	uint32_t pupdr11 :2;
	uint32_t pupdr12 :2;
	uint32_t pupdr13 :2;
	uint32_t pupdr14 :2;
	uint32_t pupdr15 :2;
}GPIOx_PUPDR_t;
typedef struct
{
	uint32_t idr0 :1;
	uint32_t idr1 :1;
	uint32_t idr2 :1;
	uint32_t idr3 :1;
	uint32_t idr4 :1;
	uint32_t idr5 :1;
	uint32_t idr6 :1;
	uint32_t idr7 :1;
	uint32_t idr8 :1;
	uint32_t idr9 :1;
	uint32_t idr10 :1;
	uint32_t idr11 :1;
	uint32_t idr12 :1;
	uint32_t idr13 :1;
	uint32_t idr14 :1;
	uint32_t idr15 :1;
	uint32_t reserved :15;
}GPIOx_IDR_t;
typedef struct
{
		uint32_t odr0 :1;
		uint32_t odr1 :1;
		uint32_t odr2 :1;
		uint32_t odr3 :1;
		uint32_t odr4 :1;
		uint32_t odr5 :1;
		uint32_t odr6 :1;
		uint32_t odr7 :1;
		uint32_t odr8 :1;
		uint32_t odr9 :1;
		uint32_t odr10 :1;
		uint32_t odr11 :1;
		uint32_t odr12 :1;
		uint32_t odr13 :1;
		uint32_t odr14 :1;
		uint32_t odr15 :1;
		uint32_t reserved :15;
}GPIOx_ODR_t;
typedef struct
{
	uint32_t bs0 :1;
	uint32_t bs1 :1;
	uint32_t bs2 :1;
	uint32_t bs3 :1;
	uint32_t bs4 :1;
	uint32_t bs5 :1;
	uint32_t bs6 :1;
	uint32_t bs7 :1;
	uint32_t bs8 :1;
	uint32_t bs9 :1;
	uint32_t bs10 :1;
	uint32_t bs11 :1;
	uint32_t bs12 :1;
	uint32_t bs13 :1;
	uint32_t bs14 :1;
	uint32_t bs15 :1;

	uint32_t br0 :1;
	uint32_t br1 :1;
	uint32_t br2 :1;
	uint32_t br3 :1;
	uint32_t br4 :1;
	uint32_t br5 :1;
	uint32_t br6 :1;
	uint32_t br7 :1;
	uint32_t br8 :1;
	uint32_t br9 :1;
	uint32_t br10 :1;
	uint32_t br11 :1;
	uint32_t br12 :1;
	uint32_t br13 :1;
	uint32_t br14 :1;
	uint32_t br15 :1;


}GPIOx_BSRR_t;
typedef struct
{
	uint32_t lck0 :1;
	uint32_t lck1 :1;
	uint32_t lck2 :1;
	uint32_t lck3 :1;
	uint32_t lck4 :1;
	uint32_t lck5 :1;
	uint32_t lck6 :1;
	uint32_t lck7 :1;
	uint32_t lck8 :1;
	uint32_t lck9 :1;
	uint32_t lck10 :1;
	uint32_t lck11 :1;
	uint32_t lck12 :1;
	uint32_t lck13 :1;
	uint32_t lck14 :1;
	uint32_t lck15 :1;
	uint32_t lckk :1;
	uint32_t reserved :16;

}GPIOx_LCKR_t;
typedef struct
{
	uint32_t afrl0 :4;
	uint32_t afrl1 :4;
	uint32_t afrl2 :4;
	uint32_t afrl3 :4;
	uint32_t afrl4 :4;
	uint32_t afrl5 :4;
	uint32_t afrl6 :4;
	uint32_t afrl7 :4;

}GPIOx_AFRL;
typedef struct
{
	uint32_t afrh0 :4;
	uint32_t afrh1 :4;
	uint32_t afrh2 :4;
	uint32_t afrh3 :4;
	uint32_t afrh4 :4;
	uint32_t afrh5 :4;
	uint32_t afrh6 :4;
	uint32_t afrh7 :4;

}GPIOx_AFRH;

#endif /* GPIO_REGISTERS_H_ */
