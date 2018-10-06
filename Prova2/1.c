#include <stdio.h>
#define TAM 1000
void main (void)
{
	int vetor[TAM];
	int i;
	float mediaImpar = 0, mediaPar = 0;
	
	for(i = 0; i < TAM; i++)
	{
		scanf("%i", &vetor[i]);
	}
	
	for(i = 0; i < TAM; i++)
	{
		if(i % 2 == 0)
		{
			mediaPar = mediaPar + vetor[i];
		}
		else
		{
			mediaImpar = mediaImpar + vetor[i];
		}
	}
	
	printf("A media dos elementos pares eh: %.2f", mediaPar/500);
	printf("\nA media dos elementos pares eh: %.2f", mediaImpar/500);
}
