#include <stdio.h>

int main(void)
{
	int grade = 0;
	printf("Please input the grade: ");
	scanf("%d", &grade);
	switch (grade)
	{
		case 4: case 3: case 2: case 1:
			printf("Passing!\n");
			break;
		case 0:
			printf("Fails!\n");
			break;
		default:
			printf("Illegal grade!");
			break;
	}
	return 0;
}