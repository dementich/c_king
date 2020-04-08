#include <stdio.h>
#include "stack.h"

int main(void)
{
	stack s1, s2;
	int n;
	
	s1 = stack_create();
	s2 = stack_create();
	
	stack_push(s1, 1);
	stack_push(s2, 2);
	
	n = stack_pop(s1);
	printf("n = %d\n", n);
	
	n = stack_pop(s2);
	printf("n = %d\n", n);
	
	stack_destroy(s1);
	stack_destroy(s2);
	return 0;
}