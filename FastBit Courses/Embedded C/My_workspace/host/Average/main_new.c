/*
 * main_new.c
 *
 *  Created on: 26-Sep-2022
 *      Author: soumy
 */


#include <stdio.h>

void main(void)
{
	double number1, number2, number3, average;
	printf("Enter 3 numbers: ");
	fflush(stdout);
	scanf("%lf %lf %lf", &number1, &number2, &number3);

	average = (number1 + number2 + number3)/3;

	printf("\nThe average is: %0.3lf\n", average);  //This message is first saved to output buffer
	printf("Press any key to continue");
	getchar();
	getchar();

}
