/*
 * main.c
 *
 *  Created on: 21-Oct-2022
 *      Author: soumy
 */


#include <stdint.h>
#include <stdio.h>

#include "definitions.h"

void PacketDecoder(packet_t *, uint32_t);

/*
 * Declare function to extract information from a given packet.
 * Passed parameters are the address of the data structure of type packet_t, and the 32-bit value to decode
 */

int main()
{
	uint32_t packetData;
	printf("Enter the packet information: ");
	scanf("%X", &packetData);
	packet_t decodedData;
	packet_t *pData = &decodedData;
	PacketDecoder(pData, packetData);
	getchar();
	getchar();

	return 0;
}

void PacketDecoder(packet_t *pData, uint32_t packetData)
{
	pData->crc       = (packetData & (0x03 << 0)) >> 0;
	pData->status    = (packetData & (0x01 << 2)) >> 2;
	pData->payload   = (packetData & (0xFFF << 3)) >> 3;
	pData->bat       = (packetData & (0x07 << 14)) >> 14;
	pData->sensor    = (packetData & (0x07 << 17)) >> 17;
	pData->longAddr  = (packetData & (0xFF << 20)) >> 20;
	pData->shortAddr = (packetData & (0x03 << 28)) >> 28;
	pData->addrMode  = (packetData & (0x01 << 30)) >> 30;

	printf("Memory addresses\n");
	printf("%#x\n",(uint32_t *)&pData->crc);
	printf("%#x\n",(uint32_t *)&pData->status);
	printf("%#x\n",(uint32_t *)&pData->payload);
	printf("%#x\n",(uint32_t *)&pData->bat);
	printf("%#x\n",(uint32_t *)&pData->sensor);
	printf("%#x\n",(uint32_t *)&pData->longAddr);
	printf("%#x\n",(uint32_t *)&pData->shortAddr);
	printf("%#x\n",(uint32_t *)&pData->addrMode);

	printf("CRC: %#x\n", pData->crc);
	printf("Status: %#x\n", pData->status);
	printf("Payload: %#x\n", pData->payload);
	printf("Bat: %#x\n", pData->bat);
	printf("Sensor: %#x\n", pData->sensor);
	printf("Long Address: %#x\n", pData->longAddr);
	printf("Short Address: %#x\n", pData->shortAddr);
	printf("Address Mode: %#x\n", pData->addrMode);
	printf("Memory bytes consumed by data structure: %I64u\n", sizeof(*pData));
	printf("Reason: crc, status, bat, sensor: 4; longAddr, shortAddr, addrMode: 4; payload: 2.\n1 uint16 or 2 uint8 can be fitted, so no padding introduced");
}
