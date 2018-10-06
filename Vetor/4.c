#include <stdio.h>
#define TAM 5
void main (void)
{
	int v1[TAM], qtd = 0;
	int i;
	
	for(i = 0; i < TAM; i++)
	{
		printf("\nDigite o %i valor: ", i + 1);
		scanf("\n%i", &v1[i]);
	}
	 
	for(i = 0; i < TAM; i++)
	{
		if(v1[i] > 0)
		{
			qtd++;
		}
	}
	
	printf("Quantidade de numeros positivos: %i", qtd);
}
