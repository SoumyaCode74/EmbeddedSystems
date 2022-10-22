/*
 * definitions.h
 *
 *  Created on: 21-Oct-2022
 *      Author: soumy
 */

#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_
typedef struct
{
	uint8_t crc, status, bat, sensor, longAddr, shortAddr, addrMode;
	uint16_t payload;

}packet_t;
typedef union
{
	struct
	{
		uint32_t crc:2;
		uint32_t status:1;
		uint32_t payload:12;
		uint32_t bat:3;
		uint32_t sensor:3;
		uint32_t longAddr:8;
		uint32_t shortAddr:2;
		uint32_t addrMode:1;

	}packet_fields;
	uint32_t packet_value;

}packet_u;

#endif /* DEFINITIONS_H_ */
