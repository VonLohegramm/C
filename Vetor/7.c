#include <stdio.h>
#define TAM 10
void main (main)
{
	int v1[TAM], v2[TAM];
	int i;
	
	for(i = 1; i <= TAM; i++)
	{
		v1[i - 1] = i;
		printf("\n%i", v1[i - 1]);
	}
	printf("\n");
	for(i = 1; i <= TAM; i++)
	{
		v2[i - 1] = v1[i - 1];
		printf("\n%i", v2[i - 1]);
	}
}
