#include <stdio.h>
#define TAM 5
void main (void)
{
	int v1[TAM];
	int i;
	
	for(i = 0; i < TAM; i++)
	{
		printf("\nDigite o %i valor: ", i + 1);
		scanf("\n%i", &v1[i]);
	}
	 
	for(i = 0; i < TAM; i++)
	{
		printf("\nValor: %i", v1[i] * 2);
	}
}
