#include <stdio.h>

int main(void)
{
	short val, fac = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &val);
	for(short i = 1; i <= val; i++)
	{
		fac = fac * i;
	}
	printf("Factorial of %d = %d", val, fac);
	return 0;
}