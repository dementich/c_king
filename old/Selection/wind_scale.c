#include <stdio.h>

int main(void)
{
	float wind_speed = 0.0;
	printf("Enter the wind speed: ");
	scanf("%f", &wind_speed);
	if (wind_speed < 1.0) printf("Calm");
	else if (wind_speed <= 3.0) printf("Light air");
	else if (wind_speed <= 27.0) printf("Breeze");
	else if (wind_speed <= 47.0) printf("Gale");
	else if (wind_speed <= 63.0) printf("Storm");
	else printf("Hurricane");
	return 0;
}