#include <stdio.h>
#define LIN 4
#define COL 3
void main (void)
{
	int lin, col, matriz[LIN][COL];
	
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			scanf("%i", &matriz[lin][col]);
		}
	}
	
	printf("\n");
	
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			printf("%i ", matriz[lin][col]);
		}
		printf("\n");
	}
}
