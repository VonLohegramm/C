
#include <stdio.h>
#define TAM 10
void main (main)
{
	int v1[TAM], v2[TAM];
	int i;
	
	for(i = 0; i < TAM; i++)
	{
		scanf("%i", &v1[i]);
		//printf("\n%i", v1[i]);
	}
	printf("\n");
	for(i = 1; i <= TAM; i++)
	{
		v2[i - 1] = v1[TAM - i];
		printf("\n%i", v2[i - 1]);
	}
	
	printf("\n\nPosicoes do vetor que possuiem o mesmo numero: ");
	
	for(i = 0; i < TAM; i++)
	{
		if(v2[i] == v1[i])
		{
			printf("\n%i:", i);
		}
	}
}
