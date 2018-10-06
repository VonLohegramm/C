#include <stdio.h>

void main(main)
{
	int sexo;
	float altura, peso, pesoIdeal;
	
	printf("Digite seu sexo!! \n1 para masculino 2 para feminino\n");
	scanf("%d", &sexo);
	if(sexo != 1 && sexo != 2)
	{
		printf("Numero não refere a nenhum sexo");
	}
	else
	{
		printf("Digite sua altura: \n");
		scanf("%f", &altura);	
		printf("Digite seu peso: \n");
		scanf("%f", &peso);
	}
	if(sexo == 1)
	{
		pesoIdeal = (72.7 * altura) - 62;
		printf("Peso Ideal: %.2f\n", pesoIdeal);
		if(pesoIdeal < peso)
		{
			printf("Voce esta acima do peso ideal");
		}
		else if(pesoIdeal > peso)
		{
			printf("Voce esta abaixo do peso ideal");
		}
		else
		{
			printf("Voce esta no peso Ideal Parabens!!");
		}
	}
	else if(sexo == 2)
	{
		pesoIdeal = (62.1 * altura) - 48.7;
		printf("Peso Ideal: %f\n", pesoIdeal);
		if(pesoIdeal < peso)
		{
			printf("Voce esta acima do peso ideal");
		}
		else if(pesoIdeal > peso)
		{
			printf("Voce esta abaixo do peso ideal");
		}
		else
		{
			printf("Voce esta no peso Ideal Parabens!!");
		}
	}
	
}
