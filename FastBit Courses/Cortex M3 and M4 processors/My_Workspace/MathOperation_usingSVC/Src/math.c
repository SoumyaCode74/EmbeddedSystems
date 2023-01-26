/*
 * math.c
 *
 *  Created on: Jan 1, 2023
 *      Author: soumy
 */

#include <stdint.h>

extern int32_t addition(int32_t a, int32_t b){
	return a + b;
}
extern int32_t subtraction(int32_t a, int32_t b){
	return a - b;
}
extern int32_t multiplication(int32_t a, int32_t b){
	return a * b;
}
extern int32_t division(int32_t a, int32_t b){
	/* Enable floating point unit */
	return (a / b);
}

