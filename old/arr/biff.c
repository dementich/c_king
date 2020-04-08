#include <stdio.h>

int main(void)
{
	char message[256], c;
	int i = 0, n = 0;
	printf("Enter message: ");
	while((c = getchar()) != '\n')
	{
		message[i++] = c;
	}
	for(int j = 0; j < i; j++)
	{
		switch(message[j])
		{
			case 'a': { message[j] = '4'; break; }
			case 'b': { message[j] = '8'; break; }
			case 'e': { message[j] = '3'; break; }
			case 'i': { message[j] = '1'; break; }
			case 'o': { message[j] = '0'; break; }
			case 's': { message[j] = '5'; break; }			
		}
		putchar(message[j]);
	}
	printf("!!!!!");
	return 0;
}