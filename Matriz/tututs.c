#include <stdio.h>
#define TAM 10

void main (main)
{
	int i, j, vetor[TAM], vetor2[TAM], aux, achou, ajuda = 0, qtd[TAM];
	
	for(i = 0; i < TAM; i++)
	{
		scanf("%i", &vetor[i]);
	}
	
	for(i = 0; i < TAM; i++)
	{
		aux = vetor[i];
		achou = 0;
		
		for(j = 0; j < ajuda; j++)
		{
			if(aux == vetor2[j])
			{
				achou = 1;
			}
		}
		
		if(achou == 0)
		{
			vetor2[ajuda] = aux;
			ajuda++;
		}
	}
	
	for(i = 0; i < ajuda; i++)
	{
		qtd[i] = 0;
		for(j = 0; j < TAM; j++)
		{
			if(vetor2[i] == vetor[j])
			{
				qtd[i]++;
			}
		}
	}
	
	for(i = 0; i < ajuda; i++)
	{
		printf("\nO numero %i se repetiu %i vezes", vetor2[i], qtd[i]);
	}
}
