#include <stdio.h>

int main(void)
{
	float in = 0.0f;
	float result = 0.0f;
	printf("Enter an amount: ");
	scanf("%f", &in);
	printf("With tax added:\t$%.2f", in * 1.05);
	return 0;
}