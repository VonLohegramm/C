#include <stdio.h>
#define LIN 3
#define COL 4
void main(void)
{
	int i, j;
	int m[LIN][COL];
	
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("Digite o  numero: \n");
			scanf("%i", &m[i][j]);
		}
	}
	
	for(i = 0; i < LIN; i++)
		for(j = 0; j < COL; j++)
			printf("\n%i: ", m[i][j]);
	
}
