#include <stdio.h>

#define F_TO_C_DIFF 32.0f
#define F_TO_C_FACTOR (5.0f/9.0f)

int main(void)
{	
	float f = 0.0f;
	float c = 0.0f;
	printf("Input Fahrenheit: ");
	scanf("%f", &f);
	c = (f - F_TO_C_DIFF) * F_TO_C_FACTOR;
	printf("Celsious = %.2f", c);
	return 0;
}