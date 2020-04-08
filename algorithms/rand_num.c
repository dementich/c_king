#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_arr(int a[], size_t n);
struct tm * now();

/*int main(void)
{
	printf ("Current local time and date: %s\n", asctime(now()));
	int a[10];
	int n = sizeof(a)/sizeof(a[0]);
	rand_arr(a, n);
	for(int i = 0; i < n; i++)
		printf("a[%d] = %d\n", i, a[i]);
	return 0;
}*/

void rand_arr(int a[], size_t n)
{
	for(int i = 0; i < n; i++)
		a[i] = rand();
}

struct tm * now()
{
	time_t rawtime;
	struct tm * timeinfo = malloc(sizeof(struct tm));
	time (&rawtime );
	timeinfo = localtime(&rawtime);
	return timeinfo;
}