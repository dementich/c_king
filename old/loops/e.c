#include <stdio.h>

int main(void)
{
	int n = 0;
	double e = 1;
	float fac = 0, eps = 100, min_eps = 100;
	printf("Input min_eps = ");
	scanf("%f", &min_eps);
	for(int i = 1; eps > min_eps; i++)
	{
		fac = 1;
		for(int j = 1; j <= i; j++)
		{
			fac *= j;
		}
		eps = 1.0f/fac;
		printf("eps = %.30f\n", eps);
		e = e + eps;
	}
	printf("e = %.50f", e);
	return 0;
}