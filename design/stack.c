#include "stack.h"

#define STACK_SIZE 100

struct stack_type
{
	int contents[STACK_SIZE];
	int top;
};

stack stack_create(void)
{
	stack s = malloc(sizeof(struct stack_type));
	if(!s) exit(1);
	s->top = 0;
	return s;
}

void stack_destroy(stack s)
{
	free(s);
}

static void terminate(const char * message)
{
	printf("%s\n", message);
	exit(1);
}

bool stack_is_full(stack s)
{
	return s->top == STACK_SIZE;
}

bool stack_is_empty(stack s)
{
	return s->top == 0;
}

void stack_push(stack s, int i)
{
	if(stack_is_full(s)) terminate("Error in push: stack is full");
	s->contents[s->top++] = i;
}

int stack_pop(stack s)
{
	if(stack_is_empty(s)) terminate("Error in pus: stack is empty");
	return s->contents[--s->top];
}

void stack_make_empty(stack s)
{
	s->top = 0;
}