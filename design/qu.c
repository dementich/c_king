struct queue_container;

typedef struct queue_container * queue;

typedef struct queue_container
{
	size_t element_size;
	linked_list contents;
};

queue queue_create(size_t element_size)
{
	queue result = malloc(sizeof(struct queue_container));
	result->contents = linked_list_create(element_size);
}

void queue_enqueue(queue q, void * value)
{
	linked_list_add(q->contents, value);
}

void * queue_dequeue(queue q)
{
	linked_list_item result_container = linked_list_remove_head(q->contents);
	if(!result_container) return NULL;
	return result_container->value;
}

int queue_count(queue q)
{
	if(!q->contents) return 0;
	return linked_list_count(q->contents);
}