#include <stdio.h>

int main(void)
{
	int j = 0, n = 0;
	float e = 0.0f, nom = 0.0f, denom = 0.0f;
	printf("Enter the precision n = ");
	scanf("%d", &n);
	for(int i = 0; i <= n; i++)
	{
		//printf("i = ", i);
		nom = 1;
		denom = 1;
		for(int j = 1; j <= i; j++)
			denom *= j;
		e = e + nom / denom;		
	}
	printf("e = %f", e);
	return 0;
}