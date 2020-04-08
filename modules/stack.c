#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

int main(void)
{
	return 0;
}

void make_empty()
{
	top = 0;
}

bool is_empty()
{
	return top == 0;
}

bool is_full()
{
	return top == STACK_SIZE;
}

void stack_overflow()
{
	printf("stack overflow\n");
}

int stack_underflow()
{
	printf("stack underflow\n");
	return 0;
}

void push(int i)
{
	if(is_full()) return stack_overflow();
	contents[top++] = i;
}

int pop()
{
	if(is_empty()) return stack_underflow();
	return contents[--top];
}