#include <stdio.h>

int power(int x, int n);

int main(void)
{
	printf("2^10 = %d", power(2, 10));
	return 0;
}

int power(int x, int n)
{
	if(n == 0) return 1;
	if(n % 2 == 1) return x * power(x, n - 1);
	if(n % 2 == 0) return power(x, n/2) * power(x, n/2);
}