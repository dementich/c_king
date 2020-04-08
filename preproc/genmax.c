#include <stdio.h>

#define GENERIC_MAX(type) \
type type##_max(type x, type y) \
{ \
	return x > y ? x : y; \
}

GENERIC_MAX(int)

int main(void)
{
	int a = 100, b = 200;
	int_max(a, b);
	return 0;
}