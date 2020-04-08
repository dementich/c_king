#include <stdio.h>

int main(void)
{
	
	int number_of_shares = 0, value_of_trade = 0;	
	float price_per_share = 0.0, b_commission = 0.0, r_commission = 0.0;
	printf("Enter number of shares: ");
	scanf("%d", &number_of_shares);
	printf("Enter the price per share: ");
	scanf("%f", &price_per_share);
	value_of_trade = number_of_shares * price_per_share;		
	
	if (value_of_trade < 2500)			b_commission = 30 + value_of_trade * 0.017;
	else if (value_of_trade <= 6250)	b_commission = 56 + value_of_trade * 0.0066;
	else if (value_of_trade <= 20000)	b_commission = 76 + value_of_trade * 0.0034;
	else if (value_of_trade <= 50000)	b_commission = 100 + value_of_trade * 0.0022;
	else if (value_of_trade <= 500000)	b_commission = 155 + value_of_trade * 0.0011;
	else								b_commission = 255 + value_of_trade * 0.0009;	
	if (b_commission < 39) b_commission = 39;
	
	if (number_of_shares < 2000)		r_commission = 33 + number_of_shares * 0.03;
	else								r_commission = 33 + number_of_shares * 0.02;
	
	printf("The broker commission is: $%.2f\n", b_commission);
	printf("The rival commission is: $%.2f", r_commission);
	return 0;
}