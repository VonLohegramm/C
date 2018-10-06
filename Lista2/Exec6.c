#include <stdio.h>

void main (main)
{
	float numerador, denominador, resultado;
	printf("Digite seu numerador: ");
	scanf("%f", &numerador);
	printf("Digite seu denominador: ");
	scanf("%f", &denominador);
	
	if(denominador == 0)
	{
		printf("Nao existe divisao por zero");
	}
	else
	{
		resultado = numerador / denominador;
		printf("%.2f", resultado);
	}
	
}
