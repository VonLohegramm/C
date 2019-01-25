#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char *A, *B, *C, res[100], *aux;
	int *tamA, *tamB, *tamC, i, *tamRes;
	
	A = malloc(sizeof(char*)*30);
	B = malloc(sizeof(char*)*30);
	C = malloc(sizeof(char*)*30);
	
	tamA = (int*)malloc(sizeof(int));
	tamB = (int*)malloc(sizeof(int));
	tamC = (int*)malloc(sizeof(int));
	tamRes = (int*)malloc(sizeof(int));
	
	printf("Digite uma frase: ");
	gets(A);
	printf("\nDigite uma palavra da frase: ");
	gets(B);
	printf("\nDigite uma palavra que substituira a palavra digitada anteriomente: ");
	gets(C);
	
	*tamA = strlen(A);
	*tamB = strlen(B);
	*tamC = strlen(C);
	
	for(i = 0; i < *tamA; i++)
	{
		aux = &A[i];
		
		if(strncmp(aux, B, *tamB) == 0)
		{
			strcat(res, C);
			strcat(res, " ");
			i = i + *tamB;
		}
		else
		{
			strncat(res, &aux[0], 1);
		}
	}
	
	*tamRes = strlen(res);
	
	printf("Tamanho da string: %i ", *tamRes);
	
	puts(res);
}
