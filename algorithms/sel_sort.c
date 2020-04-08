#include <stdio.h>

int main(void)
{
	int a[] = {5, 2, 4, 6, 1, 3};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i = 0; i < n - 1; i++)
	{
		int min_i = i;
		for(int j = i + 1; j < n; j++)
			if(a[j] < a[min_i]) min_i = j;
		int tmp = a[i];
		a[i] = a[min_i];
		a[min_i] = tmp;
	}
	for(int i = 0; i < n; i++)
		printf("a[%d] = %d\n", i, a[i]);
	return 0;
}

/*
Инвариант: для любой итерации i все элементы подмассива A[0..i] отсортированы по возрастанию и имеют меньшее значение, чем элементы подмассива A[i+1, n]
*/