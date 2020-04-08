#include <stdio.h>

int *f(void);

int main(void)
{
	int *j = f();
	printf("%p", j);
	return 0;
}

int *f(void)
{
	int i = 42;
	return &i;
}