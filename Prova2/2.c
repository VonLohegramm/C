#include <stdio.h>
#define TAM 1000
#define TAM2 10
void main (void)
{
	int vetor1[TAM], vetor2[TAM2], vetor3[TAM];
	int i, c = 0, l = 0;
	
	for(i = 0; i < TAM; i++)
	{
		scanf("%i", &vetor1[i]);
		//printf("\n valor: %i\n", vetor1[i]);
	}
	
	printf("\nSegundo vetor\n");
	
	for(i = 0; i < TAM2; i++)
	{
		scanf("%i", &vetor2[i]);
		//printf("\n valor: %i\n", vetor2[i]);
	}
	
	printf("\nTerceiro vetor");
	
	for(i = 0; i < TAM; i++)
	{

			if(l >= TAM2)
			{
				l = 0;
			}
			vetor3[i] = vetor1[c] + vetor2[l];
			printf("\nSomandos os vetor1[%i] and vetor[%i] = %i", c, l, vetor3[i]);
			c++;
			l++;
	}
	
	
}
