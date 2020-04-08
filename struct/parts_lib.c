#include "parts_lib.h"

void read_str(char line[NAME_LEN])
{
	while(getchar() != '\n');
	char c;
	int i = 0;
	while((c = getchar()) != '\n')
		line[i++] = c;
	line[i] = '\0';
}

void print_item(item data)
{
	printf("Number = %d, Name = %s, Quantity = %d\n", data.number, data.name, data.on_hand);
	return;
}

void perform_insert()
{
	printf("Enter part number: ");
	scanf("%d", &items[item_num].number);
	printf("Enter part name: ");	
	read_str(items[item_num].name);
	printf("Enter quantity on hand: ");
	scanf("%d", &items[item_num].on_hand);	
	item_num++;
	return;
}

void perform_search()
{
	int srch_num = -1;
	printf("Enter part number: ");
	scanf("%d", &srch_num);
	for(int i = 0; i <= item_num; i++)
		if(items[i].number == srch_num)
		{
			print_item(items[i]);
			return;
		}
	printf("Part not found!\n");
	return;
}

void perform_update()
{
	int srch_num = -1;
	printf("Enter part number: ");
	scanf("%d", &srch_num);
	for(int i = 0; i <= item_num; i++)
		if(items[i].number == srch_num)
		{
			printf("Enter change in quantity on hand: ");
			int change = 0;
			scanf("%d", &change);
			items[i].on_hand += change;			
			return;
		}
	printf("Part not found!\n");
	return;
}

void perform_print()
{
	printf("Part Number            Part Name        Quantity on hand");
	for(int i = 0; i < item_num; i++)
		printf("\n%6d %25s %15d", items[i].number, items[i].name, items[i].on_hand);
	printf("\n");
	return;
}

void print_error_msg()
{
	printf("The specified operation code is incorrect!\nPlease use the following codes:\n\ti(insert)\n\ts(search)\n\tu(update)\n\tp(print)\n\tq(quit)");
	return;
}

int find_part(int part_number)
{
	
	for(int i = 0; i <= item_num; i++)
		if(items[i].number == part_number)
			return i;
	return -1;
}

int to_be_skipped(char c)
{
	return (isspace(c) || c == '\n');
}