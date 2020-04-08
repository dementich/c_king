#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool flag = true;
	int value_of_trade = 0;
	float commission = 0.0;
	printf("Enter the value of trade: ");
	scanf("%d", &value_of_trade);
	if (value_of_trade < 2500)			commission = 30 + value_of_trade * 0.017;
	else if (value_of_trade <= 6250)	commission = 56 + value_of_trade * 0.0066;
	else if (value_of_trade <= 20000)	commission = 76 + value_of_trade * 0.0034;
	else if (value_of_trade <= 50000)	commission = 100 + value_of_trade * 0.0022;
	else if (value_of_trade <= 500000)	commission = 155 + value_of_trade * 0.0011;
	else								commission = 255 + value_of_trade * 0.0009;
	printf("The commission is: $%.2f", commission);
	return 0;
}