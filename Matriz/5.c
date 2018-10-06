#include <stdio.h>
#define LIN 4
#define COL 4
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
	
	printf("Os numeros em diagonais sao: \n");
	
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			if(col == lin)
			printf("%i ", matriz[lin][col]);
		}
		printf("\n");
	}
}
