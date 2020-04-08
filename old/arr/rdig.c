#include <stdio.h>
#define N 10
#define SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

int main(void)
{
	int digits[10] = {0};
	char ch;
	printf("Enter a number: ");
	while((ch = getchar()) != '\n')		
		digits[ch - '0'] = digits[ch - '0'] + 1;
	
	for(int i = 0; i < SIZE(digits); i++)
		if (digits[i] > 0)
			printf("%d - %d repeat(s)\n", i, digits[i]);
	
	return 0;
}