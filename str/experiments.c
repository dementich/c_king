#include <stdio.h>

int main(void)
{
	char *p = "Hello World!";
	printf(p);
	ungetc('x', stdin);
	return 0;
}