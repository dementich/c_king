#define INSERT 'i'
#define SEARCH 's'
#define UPDATE 'u'
#define PRINT 'p'
#define QUIT 'q'
#define NAME_LEN 128
#define ITEM_MAX_COUNT 32

typedef struct
{
	int number;
	char name[NAME_LEN];
	int on_hand;
} item;

static item items[ITEM_MAX_COUNT];

static int item_num = 0;

void perform_insert();
void perform_search();
void perform_update();
void perform_print();
void print_error_msg();