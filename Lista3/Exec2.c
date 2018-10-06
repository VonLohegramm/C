#include <stdio.h>

void main (main)
{
	float num1, num2, num3;
	printf("Digite um numero: ");
	scanf("%f", &num1);
	printf("Digite outro numero: ");
	scanf("%f", &num2);
	printf("Digite mais um numero: ");
	scanf("%f", &num3);
	
	if(num3 == num1 || num3 == num2)
	{
		printf("Numero esta na extremidade");
	}
	else if(num3 < num1 || num3 > num2)
	{
		printf("Numero esta fora");
	}
	else
	{
		printf("Numero esta dentro");
	}
}
