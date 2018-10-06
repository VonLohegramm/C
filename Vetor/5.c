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
		if(v1[i] < 0)
		{
			printf("\nNumero negativo: %i", v1[1]);
		}
	}
	
}
