#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define M 10
#define N 10

int main(void)
{
	char a[M][N] = {0};
	char item;
	int r_i = 0, r_j = 0, stp_x = 0, stp_y = 0; 
	
	//generating
	a[r_i][r_j] = 'A';
	srand(time(NULL));
	for(char c = 'B'; c <= 'Z'; c++)
	{		
		do
		{
			stp_x = (int)(rand() % 3 - 1);
			stp_y = (int)(rand() % 3 - 1);
		} while((r_i + stp_x) <= 0 || (r_j + stp_y) <= 0 || (r_i + stp_x) >= M || (r_j + stp_y) >= N || a[(r_i + stp_x)][(r_j + stp_y)] != 0);
		r_i += stp_x;
		r_j += stp_y;
		a[r_i][r_j] = c;
	}
	
	//printing
	for(int i = 0; i < M; i++)
	{
		for(int j = 0; j < N; j++)
			printf(" %c", a[i][j] == 0 ? '.' : a[i][j]);		
		printf("\n");
	}
	return 0;
}