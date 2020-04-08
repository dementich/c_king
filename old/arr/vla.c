#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter size of the array: ");
	scanf("%d", &n);
	
	int arr[n] = {0};
	for(int i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}