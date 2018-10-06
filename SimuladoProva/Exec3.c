#include <stdio.h>

void main (main)
{
	int valorInicial, valorFinal, i, qtd = 0, soma;
	float result;
	
	printf("Digite o valor inicial: ");
	scanf("%i", &valorInicial);
	printf("Digite o valor final: ");
	scanf("%i", &valorFinal);
	
	printf("\nIntervalo entre o numero: %i e o numero: %i !!!\n", valorInicial, valorFinal);
	for(i = valorInicial + 1; i < valorFinal;i++)
	{
		printf("%i\n", i);
		soma = i + soma;
		qtd = qtd + 1;
	}
	if(qtd == 0)
	{
		printf("\nIntervalo nulo");
	}
	else if(qtd == 1)
	{
		printf("\nIntervalo com um valor");
		result = (float)soma/qtd;
		printf("\nA media e: %.2f", result);
	}
	else if(qtd > 1)
	{
		printf("\nIntervalo com dois ou mais valores");
		result = (float)soma/qtd;
		printf("\nA media e: %.2f", result);
	}
}
