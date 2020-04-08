#include <stdio.h>

void merge(int a[], int left_edge, int middle, int right_edge);
void print_arr(int a[], int n);
void mrg_sort(int a[], int left_edge, int right_edge, int tabs);

int main(void)
{
	int a[] = {3, 41, 52, 26, 38, 57, 9, 49};
	//int a[] = {5, 2};
	//int a[] = {2, 4, 5, 1, 3, 6};
	int n = sizeof(a)/sizeof(a[0]);
	int left_edge = 0; int right_edge = n - 1; int middle = (left_edge + right_edge) / 2;
	mrg_sort(a, left_edge, right_edge, 0);
	//merge(a, left_edge, middle, right_edge);
	print_arr(a, n);
	return 0;
}

void mrg_sort(int a[], int left_edge, int right_edge, int tabs)
{
	for(int i = 0; i < tabs; i++) printf("\t");
	for(int i = left_edge; i <= right_edge; i++) printf("%d ", a[i]);
	printf("\n");
	if(right_edge > left_edge)
	{
		int middle = (left_edge + right_edge) / 2;
		mrg_sort(a, left_edge, middle, tabs + 1);
		mrg_sort(a, middle + 1, right_edge, tabs + 1);
		merge(a, left_edge, middle, right_edge);
		for(int i = 0; i < tabs; i++) printf("\t");
		printf("result = ");
		for(int i = left_edge; i <= right_edge; i++) printf("%d ", a[i]);
		printf("\n");
	}
}

void merge(int a[], int left_edge, int middle, int right_edge)
{
	int n1 = middle - left_edge + 1;
	int n2 = right_edge - middle;
	int left[n1];
	int right[n2];
	int i; int j;
	for(i = 0; i < n1; i++)
		left[i] = a[left_edge + i];
	//print_arr(left, n1);
	for(j = 0; j < n2; j++)
		right[j] = a[middle + j + 1];
	//print_arr(right, n2);
	for(int k = left_edge, i = 0, j = 0; k <= right_edge; k++)	
		//printf("k = %d, left[%d] = %d, right[%d] = %d\n", k, i, left[i], j, right[j]);
		if(left[i] <= right[j]) a[k] = i < n1 ? left[i++] : right[j++];
		else a[k] = j < n2 ? right[j++] : left[i++];	
}

void print_arr(int a[], int n)
{
	for(int i = 0; i < n; i++)
		printf("a[%d] = %d\n", i, a[i]);
}