#include <stdio.h>
#include "experiments_lib.h"

int main(void)
{
	good item;
	employee emp = {.number = 1, .name = "Kirill Bulanov", .sex = 'M'};
	print_employee(emp);
	return 0;
}