#include <stdio.h>

int main(void)
{
	int m, n, tmp, m1, n1;
	printf("Enter a fraction: ");
	scanf("%d /%d", &m, &n);
	while(n != 0)
	{
		tmp = n;
		n = m % n;
		m = tmp;
	}
	printf("GCD = %d", m);
	return 0;
}