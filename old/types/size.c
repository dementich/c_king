#include <stdio.h>

int main(void)
{	
	printf("short int size\t%d bits\n", sizeof(short int) * 8);
	printf("unsigned short int size\t%d bits\n", sizeof(unsigned short int) * 8);
	printf("int size\t%d bits\n", sizeof(int) * 8);
	printf("unsigned int size\t%d bits\n", sizeof(unsigned int) * 8);
	printf("long int size\t%d bits\n", sizeof(long int) * 8);
	printf("unsigned long int size\t%d bits\n", sizeof(unsigned long int) * 8);
	printf("long long int size\t%d bits\n", sizeof(long long int) * 8);
	printf("unsigned long long int size\t%d bits\n", sizeof(unsigned long long int) * 8);
	
	unsigned int v = 4294967295;
	printf("v = %u\n", v);
	printf("hex v = %x\n", v);
	printf("v + 1 = %d\n", v + 1);
	return 0;
}