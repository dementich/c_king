#include <stdio.h>

int main(void)
{
	int total = 0;
	int num20 = 0, num10 = 0, num5 = 0, num1 = 0;
	printf("Enter a dollar amount = ");
	scanf("%d", &total);
	num20 = total / 20; total = total % 20;
	printf("$20 bills = %d\n", num20);
	num10 = total / 10; total = total % 10;
	printf("$10 bills = %d\n", num10);
	num5 = total / 5; total = total % 5;
	printf("$5 bills = %d\n", num5);
	num1 = total;
	printf("$1 bills = %d\n", num1);
	return 0;
}