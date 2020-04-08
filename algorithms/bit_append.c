#include <stdio.h>

void print(int arr[], size_t n);

int main(void)
{
	int n = 10;
	int a[] = {1, 0, 0, 1, 1, 1, 0, 0, 1, 1};
	int b[] = {0, 1, 1, 0, 0, 1, 0, 1, 1, 1};
	int c[n + 1];
	int add = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		int sum_val = a[i] + b[i] + add;
		if(sum_val <= 1)
			c[i] = sum_val;
		else if (sum_val == 2)
		{
			c[i] = 0;
			add = 1;
		}
		else if (sum_val == 3)
		{
			c[i] = 1;
			add = 1;
		}
	}
	c[i] = add;
	printf("a = "); print(a, n);
	printf("\nb = "); print(b, n);
	printf("\nc = "); print(c, n + 1);
	return 0;
}

void print(int arr[], size_t n)
{	
	for(int i = 0; i < n; i++)
		printf("%d, ", arr[i]);
}