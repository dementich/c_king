#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

bool is_op(char c);
int do_calc(char op);
void make_empty();
bool is_subm(char c);

int contents[STACK_SIZE];
int top = 0;

int main(void)
{
	char c;
	printf("Enter an RPN expression: ");
	while((c = getchar()) != 'q')
	{
		if(isspace(c)) continue;
		if(isdigit(c)) push(c - '0');
		if(is_op(c)) push(do_calc(c));
		if(is_subm(c)) show_result();
	}	
	return 0;
}

void show_result()
{
	printf("Value of expression: ");
	printa(contents, top);
	make_empty();
	printf("Enter an RPN expression: ");
}

int do_calc(char op)
{
	int l_val, r_val, res;
	r_val = pop();
	l_val = pop();
	switch(op)
	{
		case '+': return l_val + r_val;
		case '-': return l_val - r_val;
		case '*': return l_val * r_val;
		case '/': return l_val / r_val;		
	}
}

bool is_subm(char c)
{
	return (c == '=');
}

bool is_op(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
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

void printa(int a[], int n)
{
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}