#include <stdio.h>

int main(void)
{
	int val1, val2, val3, val4, min1, min2, max1, max2, min, max;	
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &val1, &val2, &val3, &val4);
	min1 = min2 = max1 = max2 = min = max = val1;
	
	if (val1 > val2)
	{
		max1 = val1;
		min1 = val2;
	} 
	else
	{
		max1 = val2;
		min1 = val1;
	}
	
	if (val3 > val4)
	{
		max2 = val3;
		min2 = val4;
	}
	else
	{
		max2 = val4;
		min2 = val3;
	}
	
	if (max1 > max2)	max = max1;
	else max = max2;
	
	if (min1 < min2)	min = min1;
	else min = min2;
	
	printf("Largest: %d\n", max);
	printf("Smallest: %d", min);
	return 0;
}