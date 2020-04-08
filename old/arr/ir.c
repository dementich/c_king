#include <stdio.h>
#include <math.h>

int main(void)
{
	int rate = 6, years = 5;
	/*printf("Enter interest rate: ");
	scanf("%d", &rate);
	printf("Enter number of years: ");
	scanf("%d", &years);*/
	
	printf("Years\t");
	for(int i = 0; i < 5; i++)
	{
		printf("  %d%%    ", rate + i);
	}
	printf("\n");
	for(int i = 1; i <= years; i++)
	{
		printf("  %d\t", i);
		for(int j = 0; j < 5; j++)
		{			
			printf("%5.2f  ", pow((100 + (float)(rate + j))/100, i) * 100);
		}
		printf("\n");
	}
	return 0;
}