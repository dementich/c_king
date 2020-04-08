#include <stdio.h>
#include <stdlib.h>

struct node
{
	int value;
	struct node * next;
};

struct node * create_node(int val);
struct node * append_node(struct node * item, int value);
void print_list_item(struct node);

int main(void)
{
	struct node * first_item, * last_item, *curr_item;
	first_item = create_node(42);
	last_item = first_item;
	//print_list_item(*first_item);
	for(int i = 0; i < 40; i++) last_item = append_node(last_item, i);	
	(*last_item).next = NULL;
	curr_item = first_item;
	do
		print_list_item(*curr_item);		
	while(curr_item = curr_item->next);
	return 0;
}

void print_list_item(struct node item)
{
	printf("Node value = %d\n", item.value);
	return;
}

struct node * append_node(struct node * item, int value)
{
	item->next = create_node(value);
	return item->next;
}

struct node * create_node(int val)
{
	struct node * result;
	result = malloc(sizeof(struct node));
	result->value = val;
	result->next = NULL;
	return result;
}