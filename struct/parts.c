#include <stdio.h>
#include "parts_lib.h"

int main(void)
{
	char op;
	for(;;)
	{
		printf("Enter operation code: ");
		scanf(" %c", &op);
		switch(op)
		{
			case INSERT:	{perform_insert();	break;	}
			case SEARCH:	{perform_search();	break;	}
			case UPDATE:	{perform_update();	break;	}
			case PRINT:		{perform_print();	break;	}
			case QUIT:		return 0;
			default: print_error_msg();
		}
		printf("\n");
	}
	return 0;
}