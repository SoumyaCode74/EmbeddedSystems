/*
 * main.c
 *
 *  Created on: 22-Oct-2022
 *      Author: soumy
 */

#include <stdint.h>
#include <stdio.h>

#include "definitions.h"

void PacketDecoder(packet_u *);

/*
 * Declare function to extract information from a given packet.
 * Passed parameters are the address of the data structure of type packet_t, and the 32-bit value to decode
 */

int main()
{
	packet_u Packet;
	printf("Enter the packet information: ");
	scanf("%X", &Packet.packet_value);
	packet_u *pData = &Packet;
	PacketDecoder(pData);
	getchar();
	getchar();

	return 0;
}

void PacketDecoder(packet_u *pData)
{
	printf("Memory addresses\n");
	printf("%#x\n",(uint32_t *)&pData->packet_value);
	printf("%#x\n",(uint32_t *)&pData->packet_fields);
	//Cannot take addressses of bit-fields
	/*printf("%#x\n",(uint32_t *)&pData->packet_fields.crc);
	printf("%#x\n",(uint32_t *)&pData->packet_fields.status);
	printf("%#x\n",(uint32_t *)&pData->packet_fields.payload);
	printf("%#x\n",(uint32_t *)&pData->packet_fields.bat);
	printf("%#x\n",(uint32_t *)&pData->packet_fields.sensor);
	printf("%#x\n",(uint32_t *)&pData->packet_fields.longAddr);
	printf("%#x\n",(uint32_t *)&pData->packet_fields.shortAddr);
	printf("%#x\n",(uint32_t *)&pData->packet_fields.addrMode);*/

	printf("CRC: %#x\n", pData->packet_fields.crc);
	printf("Status: %#x\n", pData->packet_fields.status);
	printf("Payload: %#x\n", pData->packet_fields.payload);
	printf("Bat: %#x\n", pData->packet_fields.bat);
	printf("Sensor: %#x\n", pData->packet_fields.sensor);
	printf("Long Address: %#x\n", pData->packet_fields.longAddr);
	printf("Short Address: %#x\n", pData->packet_fields.shortAddr);
	printf("Address Mode: %#x\n", pData->packet_fields.addrMode);
	printf("Memory bytes consumed by data structure: %I64u\n", sizeof(*pData));
}
