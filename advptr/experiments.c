#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

typedef struct
{
	int x;
	int y;
} point;

char * concat(const char * str1, const char * str2);

int main(void)
{
	char * p = malloc(100);
	//free(p);
	strcpy(p, "abc");
	printf("p = %s\n", p);
	return 0;
}

char * concat(const char * str1, const char * str2)
{
	char * result;
	result = malloc(strlen(str1) + strlen(str2) + 1);
	strcpy(result, str1);
	strcat(result, str2);
	return result;
}