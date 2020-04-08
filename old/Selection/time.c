#include <stdio.h>

int main(void)
{
	int hh = 0, mm = 0;
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hh, &mm);
	printf("Equivalent 12-hour time: ");
	if (hh == 0 || hh == 12) printf("12:");
	else if (hh > 12) printf("%d:", hh - 12);
	if (mm < 10) printf("0");
	printf("%d ", mm);
	if (hh < 12) printf("AM");
	else printf("PM");
	return 0;
}