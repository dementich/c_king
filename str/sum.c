#include <stdio.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	for(int i = 1; i < argc; i++)			
		sum += atoi(argv[i]);;
	printf("Sum = %d", sum);
	return 0;
}