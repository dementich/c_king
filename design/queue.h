#include <stdbool.h>

typedef struct queue_item_type *queue_item;
typedef struct queue_type *queue;

void enqueue(queue q, queue_item i);
queue_item deque(queue q);
queue_item get_first(queue q);
queue_item get_last(queue q);
bool is_empty(queue q);