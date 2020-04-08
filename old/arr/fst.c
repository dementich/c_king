#include <stdio.h>
#define N 10

int main(void)
{
	int arr[N];
	printf("Enter %d numbers: ", N);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("In reverse order: ");
	for(int i = N - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}