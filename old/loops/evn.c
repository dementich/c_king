#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter the n:");
	scanf("%d", &n);
	for(int i = 1; i * i <= n; i++)
	{
		if(i * i % 2 == 0) printf("%d\n", i * i);
	}
	return 0;
}