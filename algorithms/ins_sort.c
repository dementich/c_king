#include <stdio.h>
#include "rand_num.c"
#define SIZE 500000

int main(void)
{
	int a[SIZE];
	rand_arr(a, SIZE);
	//int a[] = {2, 4, 5, 1, 3, 6};
	//merge(a, 0, 2, 5);
	printf ("Current local time and date: %s\n", asctime(now()));
	//int a[] = {5, 2, 4, 6, 1, 3};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i = 1; i < n; i++)
	{
		int k = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > k)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k;
	}
	printf ("Current local time and date: %s\n", asctime(now()));
	/*for(int i = 0; i < n; i++)
		printf("a[%d] = %d\n", i, a[i]);*/
	return 0;
}