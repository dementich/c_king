#include <stdio.h>

void printa(int a[], int n);
int max_i(int a[], int low, int high);
void selection_sort(int a[], int low, int high);

int main(void)
{
	int a[] = {12, 3, 6, 18, 7, 15, 10};
	int n = sizeof(a)/sizeof(a[0]);
	printa(a, n);
	//printf("max = %d", a[max_i(a, 0, n)]);
	selection_sort(a, 0, n - 1);
	printa(a, n);
	return 0;
}

void selection_sort(int a[], int low, int high)
{
	if(low == high) return;
	//printf("\nArray before modification: \n");
	//printa(a, 7);
	int max_index = max_i(a, low, high);
	//printf("max_index = %d\n", max_index);
	//printf("last_index = %d\n", high);
	int tmp = a[high];
	a[high] = a[max_index];
	a[max_index] = tmp;	
	//printf("Array after modification: \n");
	//printa(a, 7);
	selection_sort(a, low, high - 1);
}

int max_i(int a[], int low, int high)
{
	int result = low;
	for(int i = low; i <= high; i++) result = a[i] > a[result] ? i : result;
	return result;
}

void printa(int a[], int n)
{
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}