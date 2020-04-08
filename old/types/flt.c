#include <stdio.h>

int main(void)
{
	printf("sizeof(float) = %d bits\n", sizeof(float) * 8);
	printf("sizeof(double) = %d bits\n", sizeof(double) * 8);
	printf("sizeof(long double) = %d bits\n", sizeof(long double) * 8);
	printf("sizeof(char) = %d bits\n", sizeof(char) * 8);
	return 0;
}