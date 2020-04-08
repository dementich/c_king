#include <stdio.h>
#define M 10
#define N 10

int main(void)
{
	int n = N, m = M;
	int a[N][M];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		{
			a[i][j] = i * 10 + j + 1;
		}
	/*for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%d\t", a[i][j]);			
		}
		printf("\n");
	}*/
	for(int k = 0; k < n * m; k++)
	{
		printf("%d\t", a[k]);
	}
	return 0;
}