#include <stdio.h>
#define LIN 3
#define COL 3
void main (void)
{
	int lin, col, matriz[LIN][COL], matriz2[LIN][COL];
	
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
			matriz2[lin][col] = matriz[lin][col] * 2;
		}
	}
	
	printf("\nSegunda Matriz\n");
	for(lin = 0; lin < LIN; lin++)
	{
		for(col = 0; col < COL; col++)
		{
			printf("%i ", matriz2[lin][col]);
		}
		printf("\n");
	}
}
