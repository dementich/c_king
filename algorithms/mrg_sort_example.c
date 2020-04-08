#include <stdio.h>
#include <limits.h>
#include "rand_num.c"
#define SIZE 500000

void mrg_sort(int a[], int p, int r, int tabs);
void merge(int a[], int left, int middle, int right);

int main(void)
{
	//int a[] = {5, 2, 4, 6, 1, 3};
	int a[SIZE];
	rand_arr(a, SIZE);
	//int a[] = {2, 4, 5, 1, 3, 6};
	//merge(a, 0, 2, 5);
	printf ("Current local time and date: %s\n", asctime(now()));
	mrg_sort(a, 0, SIZE - 1, 0);
	printf ("Current local time and date: %s\n", asctime(now()));
	/*for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
		printf("a[%d] = %d\n", i, a[i]);*/
	return 0;
}

void merge(int a[], int left, int middle, int right)
{
	int left_n = middle - left + 1;
	int right_n = right - middle;
	int left_part[left_n + 1];
	int right_part[right_n + 1];
	int i = 0; int j = 0;
	for(i = 0; i < left_n; i++)
		left_part[i] = a[left + i];
	left_part[left_n] = INT_MAX;
	for(j = 0; j < right_n; j++)
		right_part[j] = a[middle + j + 1];
	right_part[right_n] = INT_MAX;
	i = j = 0;
	for(int k = left; k <= right; k++)
	{
		if(left_part[i] <= right_part[j]) a[k] = left_part[i++];
		else a[k] = right_part[j++];
	}
}

void mrg_sort(int a[], int p, int r, int tabs)
{
	/*for(int i = 0; i < tabs; i++)
		printf("\t");
	printf("p = %d; r = %d\n", p, r);*/
	if(p < r)
	{
		int q = (p + r) / 2;
		mrg_sort(a, p, q, tabs + 1);
		mrg_sort(a, q + 1, r, tabs + 1);
		merge(a, p, q, r);
	}
}