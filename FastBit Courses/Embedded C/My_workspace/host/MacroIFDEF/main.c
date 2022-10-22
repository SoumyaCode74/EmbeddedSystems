/*
 * main.c
 *
 *  Created on: 22-Oct-2022
 *      Author: soumy
 */

#include <stdint.h>
#include <stdio.h>

#define PI 3.1415f
#define RADIUS 5
#define BASE 10
#define HEIGHT 15
#define AREA_CIRCLE(x) PI*(x)*(x)
#define AREA_TRIANGLE(x, y) 0.5*(x)*(y)

#define AREA_CIR
#define AREA_TRI

//#undef AREA_CIR
int main(void)
{
#ifdef AREA_CIR
	float area_circle = AREA_CIRCLE(RADIUS+HEIGHT);
	printf("Area of circle: %f\n",area_circle);
#endif
#ifdef AREA_TRI
	float area_triangle = AREA_TRIANGLE(BASE+HEIGHT, HEIGHT);
	printf("Area of triangle: %f\n",area_triangle);
#endif
}

