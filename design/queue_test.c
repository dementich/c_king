#include <stdio.h>
#include "ll.c"
#include "qu.c"

int main(void)
{
	queue q = queue_create(sizeof(int));
	
	for(int i = 1; i <= 42; i++)		
		queue_enqueue(q, &i);
	
	printf("Queue size before dequeue = %d\n", queue_count(q));
		
	while(void * queue_item = queue_dequeue(q))
		printf("Value = %d\n", queue_item);
	
	printf("Queue size after dequeue = %d\n", queue_count(q));
	/*linked_list ll = linked_list_create(sizeof(int));
	for(int i = 1; i <= 42; i++)		
		linked_list_add(ll, &i);
	for(linked_list_item item = ll->head; item; item = item->next)
		printf("Value = %d\n", item->value);*/
	return 0;
}