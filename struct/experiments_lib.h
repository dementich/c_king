#define NAME_LEN 100

typedef struct
{
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
} good;

typedef struct
{
	char name[NAME_LEN + 1];
	int number;
	char sex;
} employee;

void print_employee(employee emp);