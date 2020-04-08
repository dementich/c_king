#include "queue.h";

#define QUEUE_SIZE 100

typedef struct queue_item_type
{
	int value;
};

typedef struct queue_type
{
	queue_item_type contents[QUEUE_SIZE];
};

void enqueue(queue q, queue_item i);
queue_item deque(queue q);
queue_item get_first(queue q);
queue_item get_last(queue q);
bool is_empty(queue q);