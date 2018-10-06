#include <stdio.h>
#define MAX 10

void main (void	)
{
	int v[MAX], i, j;
	int aux[MAX], totalAux = 0, val, achou;
	int quant[MAX];
	
	for(i =0; i < MAX; i++)
	{
		printf("Digite um valor: ");
		scanf("%i", &v[i]);
		quant[i] = 0;
	}
	
	for(i = 0; i < MAX; i++)
	{
		val = v[i];
		achou = 0;
		for(j = 0; j < totalAux; j++)
		{
			if(val == aux[j])
			{
				achou = 1;	
			}
		}
		//Verifica se val ja esta em aux
		if(achou == 0)
		{
			aux[totalAux] = val;
			totalAux++;
		}
	}
	
	//Conta as repetições
	for(i = 0; i < totalAux; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			if(aux[i] == v[j])
			{
				quant[i]++;
			}
		}
	}
	
	for(i = 0; i < totalAux; i++)
	{
		printf("\nnumero: %i a quantidade de repeticoes %i", aux[i], quant[i]);
	}
}
