#include <stdio.h>

int main(void)
{
	int a[] = {5, 2, 4, 6, 1, 3};
	print_arr(a, 6, sizeof(int));
	return 0;
}

void print_arr(void * array, size_t nmemb, size_t size)
{
	for(int i = 0; i < nmemb; i++)
		printf("%d\n", *(int*)(array + i * size));
}