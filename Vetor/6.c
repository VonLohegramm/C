#include <stdio.h>
#define TAM 100
void main (main)
{
	int v1[TAM];
	int i;
	
	for(i = 1; i <= TAM; i++)
	{
		if(i % 2 == 0)
		{
			v1[i - 1] = i;
			printf("\n%i", v1[i - 1]);
		}	
	}
}
