struct linked_list_container;
struct linked_list_item_container;

typedef struct linked_list_container * linked_list;
typedef struct linked_list_item_container * linked_list_item;

typedef struct linked_list_container
{
	linked_list_item head;
	linked_list_item tail;
	size_t element_size;
};

typedef struct linked_list_item_container
{
	void * value;
	linked_list_item next;
	linked_list_item prev;
};

linked_list linked_list_create(size_t element_size)
{
	linked_list result = malloc(sizeof(struct linked_list_container));
	result->element_size = element_size;
	result->head = NULL;
	result->tail = NULL;
}

void linked_list_add(linked_list ll, void * value)
{
	linked_list_item ll_item = malloc(sizeof(struct linked_list_item_container));
	memcpy(&ll_item->value, value, ll->element_size);
	if(!ll->head)
	{
		ll->head = ll_item;
		ll->tail = ll_item;
	}
	else
	{
		ll->tail->next = ll_item;
		ll_item->prev = ll->tail;
		ll->tail = ll_item;
		ll->tail->next = NULL;
	}
}

linked_list_item linked_list_remove_head(linked_list ll)
{
	if(!ll->head) return NULL;
	linked_list_item result = ll->head;	
	if(ll->head == ll->tail)
	{
		ll->head = NULL;
		ll->tail = NULL;		
	}
	else
	{		
		result->next->prev = NULL;
		ll->head = result->next;
		result->next = NULL;		
	}
	return result;
}

linked_list_item linked_list_remove_tail(linked_list ll)
{
	if(!ll->head) return NULL;
	linked_list_item result = ll->tail;	
	if(ll->head == ll->tail)
	{
		ll->head = NULL;
		ll->tail = NULL;		
	}
	else
	{
		result->prev->next = NULL;
		ll->tail = result->prev;
		result->prev = NULL;		
	}
	return result;
}

int linked_list_count(linked_list ll)
{
	if(!ll->head) return 0;
	int result = 0;
	for(linked_list_item lli = ll->head; lli; lli = lli->next) result++;
	return result;
}