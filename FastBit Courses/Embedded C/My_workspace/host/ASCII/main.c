/*
 * main.c
 *
 *  Created on: 26-Sep-2022
 *      Author: soumy
 */

#include <stdio.h>

void main()
{
	char chr1, chr2, chr3, chr4, chr5, chr6;
	int code1, code2, code3, code4, code5, code6;

	printf("Enter 6 characters of your choice: ");
	fflush(stdout);
	scanf("%c %c %c %c %c %c", &chr1, &chr2, &chr3, &chr4, &chr5, &chr6);
	code1 = chr1;
	code2 = chr2;
	code3 = chr3;
	code4 = chr4;
	code5 = chr5;
	code6 = chr6;
	printf("ASCII codes : %d, %d, %d, %d, %d, %d\n", code1, code2, code3, code4, code5, code6);
	fflush(stdout);
	printf("Press enter key to exit the application\n");
	fflush(stdout);
	getchar();
	getchar();
}
