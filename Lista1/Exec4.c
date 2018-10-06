#include <stdio.h>

void main (main)
{
	float fare, celsius;
	printf("Digite a temperatura em fare: ");
	scanf("%f", &fare);
	
	celsius = (fare - 32) / 1.8;
	
	printf("Celsius %f", celsius);
}
