#include <stdio.h>

void main (void)
{
	float ano, dias;
	
	printf("Ano de nascimento: ");
	scanf("%f", &ano);
	dias = (2018 - ano) * 365;
	printf("Voce tem %.0f dias", dias);
}
