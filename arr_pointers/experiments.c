#include <stdio.h>

int main(void)
{
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int *p = &a[0][0], *q = &a;
	printf("%d\n", *(p + 3));
	printf("%d\n", *(q + 3));
	return 0;
}