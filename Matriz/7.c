#include <stdio.h>
#define LIN 4
#define COL 4
void main (void)
{
	int lin, col, matriz[LIN][COL], maiorElem, posiMaior;
	int aux = 0, miniMax, linMinMax, colMinMax;
	
	//Recebendo os valores da matriz 4x4
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			scanf("%i", &matriz[lin][col]);
		}
	}
	
	//Achando o maior número na matriz é a sua posição na mesma
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			if(lin == 0 && col == 0)
			{
				maiorElem = matriz[lin][col];
				posiMaior = lin;
			}
			
			else if(matriz[lin][col] > maiorElem)
			{
				maiorElem = matriz[lin][col];
				posiMaior = lin;
			}
		}
	}
	
	printf("\n");
	
	//Mostrando a matriz formatada para facilitar a visualização
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			printf("%i ", matriz[lin][col]);
		}
		printf("\n");
	}
	
	//Enfim achando o miniMax é sua posição na matriz
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			if(lin == posiMaior)
			{
				if(aux == 0)
			 	{
			 		miniMax = matriz[lin][col];	
			 		linMinMax = lin;
			 		colMinMax = col;
			 		aux++;
				}
				else if(matriz[lin][col] < miniMax)
				{
					miniMax = matriz[lin][col];
					linMinMax = lin;
					colMinMax = col;
				}
			}
		}
	}
	
	printf("\nO miniMax eh: %i que esta na posicao: linha %i eh coluna: %i.", miniMax, linMinMax + 1, colMinMax + 1);
	
}
