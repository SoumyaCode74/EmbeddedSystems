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

#endif /* DEFINITIONS_H_ */
