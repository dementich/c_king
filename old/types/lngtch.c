#include <stdio.h>

int main(void)
{
	char ch;
	int n = 0;
	while((ch = getchar()) != '\n')
	{
		n++;
	}
	printf("length = %d\n", n);
	return 0;
}