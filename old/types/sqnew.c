#include <stdio.h>
#include <math.h>

int main(void)
{
	float x = 0.0, y = 1.0, div, avg;
	float eps = 0.00001f;
	printf("Enter a positive number: ");
	scanf("%f", &x);
	do
	{
		div = (float)x / (float)y;
		avg = (y + div) / 2;
		printf("x = %f\ty = %f\tdiv = %f\tavg = %f\n", x, y, div, avg);
		if(fabs(avg - y) >= eps) y = avg;
		else break;
	} while(1);
	printf("Square root: %f", y);
	return 0;
}