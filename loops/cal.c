#include <stdio.h>

int main(void)
{
	int days = 0, start = 0;
	int wday = 0, day = 0;
	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1 - Sun, 7 - Sat): ");
	scanf("%d", &start);
	while(day < days)
	{
		printf(" ");
		if (++wday < start && day == 0) printf("  ");
		else printf("%2d", ++day);
		if (wday == 7)
		{
			printf("\n");
			wday = 0;
		}
	}
	return 0;
}