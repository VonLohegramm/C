#include <stdio.h>
#define LIN 3
#define COL 4
void main (void)
{
	int lin, col, matriz[LIN][COL], maior;
	
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			scanf("%i", &matriz[lin][col]);
		}
	}
	
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			if(lin == 0 && col == 0)
			{
				maior = matriz[lin][col];
			}
			else if(matriz[lin][col] > maior)
			{
				maior = matriz[lin][col];
			}
		}
	}
	
	printf("\nO maior elemento da matriz eh %i", maior);
}
