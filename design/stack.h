#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct stack_type *stack;

stack stack_create(void);
void stack_destroy(stack s);
bool stack_is_full(stack s);
bool stack_is_empty(stack s);
void stack_push(stack s, int i);
int stack_pop(stack s);
void stack_make_empty(stack s);

#endif