#include <stdio.h>

void main (main)
{
	int i, menor, maior = 0, num;
	for(i=0; i < 5; i++)
	{
		scanf("%i", &num);
		if(i == 0)
		{
			menor = num;
			maior = num;
		}
		if(num > maior)
		{
			maior = num;
		}
		if(num < menor)
		{
			menor = num;
		}
	}
	printf("O maior numero e :%i ", maior);
	printf("\nO menor numero e :%i ", menor);
}
