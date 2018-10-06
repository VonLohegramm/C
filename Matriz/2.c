#include <stdio.h>
#define LIN 3
#define COL 4
void main (void)
{
	int lin, col, matriz[LIN][COL], soma = 0;
	
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
			soma = soma + matriz[lin][col];
		}
	}
	
	printf("\n A soma dos elementos eh: %i", soma);
}
