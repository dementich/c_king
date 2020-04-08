#include <stdio.h>

int main(void)
{
	float x = 0.0, y = 0.0;
	do
	{
		printf("Enter a number: ");
		scanf("%f", &x);
		y = x > y ? x : y;
	} while (x != 0);
	printf("The largest number entered was: %f", y);
	return 0;
}