#include <stdio.h>
#include "math.h"

int main()
{
	int a = 100;
	int b = 50;
	printf("Sum of %d and %d is: %d\n", a, b, math_add(a, b));
	printf("Difference of %d and %d is: %d\n", a, b, math_sub(a, b));
	printf("Product of %d and %d is: %d\n", a, b, (int)math_mul(a, b));
	printf("Integer division of %d and %d is: %d\n", a, b, math_div(a, b));
}
