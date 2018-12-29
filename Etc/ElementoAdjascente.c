#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int adjacentElementsProduct(int *inputArray) {
    
	int maior, i;
	for(i = 0; i < TAM; i++)
	{
		if(i + 1 < TAM)
		{
			if(i == 0)
				maior = inputArray[i] * inputArray[i + 1];
			else if(inputArray[i] * inputArray[i + 1] > maior)
				maior = inputArray[i] * inputArray[i + 1];
		}
		else
			break;
	}
	
	return maior;
}



main()
{	
	int i, maior;
	int *array;
	array = (int*)malloc(TAM * sizeof(int));
	for(i = 0; i < TAM; i++)
		scanf("%i", &array[i]);
	
	
	maior = adjacentElementsProduct(array);
	
	printf("Maior: %i", maior);
		
}
