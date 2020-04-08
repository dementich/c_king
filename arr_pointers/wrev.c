#include <stdio.h>

#define SIZE 1024

int main(void)
{
	char c, text[SIZE], *p = text;
	int n = 0;
	
	printf("Enter a message: ");
	while((c = getchar()) != '\n')	
		//text[n++] = c;
		*(p + n++) = c;
	printf("Reverals is: ");
	while(--n >= 0)
		//putchar(text[n]);
		putchar(*(p + n));
	return 0;
}