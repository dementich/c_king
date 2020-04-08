#include <stdio.h>

int main(void)
{
	for(char letter = 'a'; letter <= 'z'; letter++)
	{
		printf("ucase = %c\n", letter + ('A' - 'a'));
	}
	return 0;
}