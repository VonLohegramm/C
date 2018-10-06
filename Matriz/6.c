#include <stdio.h>
#define LIN 3
#define COL 4
void main (void)
{
	int lin, col, matriz[LIN][COL], linha, somaLinha = 0;
	
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			scanf("%i", &matriz[lin][col]);
		}
	}
	do
	{
		printf("\nDigite uma linha: \n");
		scanf("%i", &linha);
	}while(linha <= 0 || linha > LIN);

	
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			printf("%i ", matriz[lin][col]);
		}
		printf("\n");
	}
	
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			if(lin == linha - 1)
			{
				somaLinha = somaLinha + matriz[lin][col];
			}
		}
	}
	
	printf("\nA soma da linha %i eh: %i", linha, somaLinha);
}
