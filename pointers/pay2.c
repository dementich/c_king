#include <stdio.h>

void get_banknotes(int dollars, int *b20, int *b10, int *b5, int *b1);

int main(void)
{
	int total = 0;
	int num20 = 0, num10 = 0, num5 = 0, num1 = 0;
	printf("Enter a dollar amount = ");
	scanf("%d", &total);
	get_banknotes(total, &num20, &num10, &num5, &num1);
	printf("$20 bills = %d\n", num20);
	printf("$10 bills = %d\n", num10);
	printf("$5 bills = %d\n", num5);
	printf("$1 bills = %d\n", num1);
	return 0;
}

void get_banknotes(int dollars, int *b20, int *b10, int *b5, int *b1)
{
	*b20 = dollars / 20; dollars = dollars % 20;
	*b10 = dollars / 10; dollars = dollars % 10;
	*b5 = dollars / 5; dollars = dollars % 5;
	*b1 = dollars;
	return;
}