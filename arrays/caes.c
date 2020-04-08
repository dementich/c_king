#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c, c_enc;
	int shift = 0;
	printf("Enter a shift amount: ");
	scanf("%d", &shift);
	getchar();
	printf("Enter a message to be encrypted: ");
	while((c = getchar()) != '\n')
	{
		if(!isalpha(c)) c_enc = c;
		else
		{
			if(isupper(c)) c_enc = (((c - 'A') + shift) % 26 + 'A');
			else c_enc = (((c - 'a') + shift) % 26 + 'a');
		}
		printf("%c", c_enc);
	}
	return 0;
}