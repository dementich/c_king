#include <stdio.h>

int main(void)
{
	int number = 0, tmp = 0, digits = 0;
	printf("Enter a number: ");
	scanf("%4d", &number);
	
	tmp = number;
	
	tmp /= 10;
	if (tmp > 0) digits++;
	
	tmp /= 10;
	if (tmp > 0) digits++;
	
	tmp /= 10;
	if (tmp > 0) digits++;
	
	digits++;
	
	printf("The number %d had %d digits", number, digits);
	return 0;
}