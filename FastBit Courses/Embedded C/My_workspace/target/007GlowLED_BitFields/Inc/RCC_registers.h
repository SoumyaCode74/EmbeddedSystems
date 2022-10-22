/*
 * RCC_registers.h
 *
 *  Created on: Oct 22, 2022
 *      Author: soumy
 */

#ifndef RCC_REGISTERS_H_
#define RCC_REGISTERS_H_

#include <stdint.h>

#define ADDR_RCC_BASE 			0x40023800
#define RCC_CR_OFFSET 			0x00
#define RCC_PLLCFGR_OFFSET  		0x04
#define RCC_CFGR_OFFSET   		0x08
#define RCC_CIR_OFFSET   		0x0C
#define RCC_AHB1RSTR_OFFSET   		0x10
#define RCC_AHB2RSTR_OFFSET   		0x14
#define RCC_AHB3RSTR_OFFSET   		0x18
#define RCC_APB1RSTR_OFFSET   		0x20
#define RCC_APB2RSTR_OFFSET   		0x24
#define RCC_AHB1ENR_OFFSET   		0x30
#define RCC_AHB2ENR_OFFSET   		0x34
#define RCC_AHB3ENR_OFFSET   		0x38
#define RCC_APB1ENR_OFFSET   		0x40
#define RCC_APB2ENR_OFFSET   		0x44
#define RCC_AHB1LPENR_OFFSET   		0x50
#define RCC_AHB2LPENR_OFFSET   		0x54
#define RCC_AHB3LPENR_OFFSET   		0x58
#define RCC_APB1LPENR_OFFSET   		0x60
#define RCC_APB2LPENR_OFFSET   		0x64
#define RCC_BDCR_OFFSET   		0x70
#define RCC_CSR_OFFSET   		0x74
#define RCC_SSCGR_OFFSET   		0x80
#define RCC_PLLI2SCFGR_OFFSET   	0x84

#define CLOCK_ENABLE 			0x01
#define CLOCK_DISABLE 			0x00

typedef struct
{
	uint32_t gpioa_en   	:1;
	uint32_t gpiob_en   	:1;
	uint32_t gpioc_en   	:1;
	uint32_t gpiod_en   	:1;
	uint32_t gpioe_en   	:1;
	uint32_t gpiof_en   	:1;
	uint32_t gpiog_en   	:1;
	uint32_t gpioh_en   	:1;
	uint32_t gpioi_en   	:1;
	uint32_t crc_en     	:1;
	uint32_t bkpsram_en 	:1;
	uint32_t ccmdataram_en 	:1;
	uint32_t dma1_en 	:1;
	uint32_t dma2_en 	:1;
	uint32_t dma2d_en 	:1;
	uint32_t ethmac_en 	:1;
	uint32_t ethmactx_en 	:1;
	uint32_t ethmacrx_en 	:1;
	uint32_t ethmacptp_en 	:1;
	uint32_t otghs_en 	:1;
	uint32_t otghsulpi_en 	:1;

	uint32_t reserved_11 	:1;
	uint32_t reserved_13 	:5;
	uint32_t reserved_19 	:1;
	uint32_t reserved_24 	:1;
	uint32_t reserved_31 	:1;
}RCC_AHB1ENR_t;


#endif /* RCC_REGISTERS_H_ */
