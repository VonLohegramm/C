#include <stdio.h>

void main (main)
{
	int n, qtd = 0, opcao, maior, soma = 0;
	do 
	{
		printf("Digite 1 para informar mais um numero eh 2 para encerrar: ");
		scanf("%i", &opcao);
		
		if(opcao != 1 && opcao != 2)
		{
			printf("\nEscolha errada\n");
		}
		
		if(opcao == 1)
		{
			printf("Digite o numero: \n");
			scanf("%i", &n);
			printf("---------------------------------------------------------\n");
			
			if(qtd == 0)
			{
				maior = n;
			}
			else if(n > maior)
			{
				maior = n;
			}
			soma = soma + n;
			qtd++;
		}
				
	}while(opcao != 2);
	if(qtd > 0)
	{
		printf("-------------------------------------------------------------\n");
		printf("O maior numero: %i", maior);
		printf("\nA media aritmetica: %.2f", (float)soma / qtd);
	}
}
