#include <stdio.h>
#define TAM 300
#define LIN 10
#define COL 15
void main (void)
{		
	int vetor[TAM], matriz[10][15];
	int escolhidos[2];
	int i, j, lin, col, valor;
	int eleAtual = 0;
	int e, preenchidos = 1;
	
	for(i = 0; i < TAM; i++)
	{
		scanf("%i", &vetor[i]);
	}
	
	
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
			matriz[i][j] = 0;
		}
	}
	
	while(eleAtual < TAM)
	{
	
			while(preenchidos <= 3)
			{
				
				if(preenchidos == 1)
				{
					lin = vetor[eleAtual];
					eleAtual = eleAtual + 1;
				}
				if(preenchidos == 2)
				{
					col = vetor[eleAtual];
					eleAtual = eleAtual + 1;
				}
				if(preenchidos == 3)
				{
					valor = vetor[eleAtual];
					eleAtual = eleAtual + 1;
				}
				

				preenchidos++;
				
			}
			printf("\nConjuntos de 3 usados para atribuicao na Matriz");
			if((lin > 0) && (lin < LIN) && (col > 0) && (col < COL) && (valor > 0))
			{
				printf("\nLinha: %i ", lin);
				printf("Coluna: %i ", col);
				printf("Valor: %i ", valor);
			}

			
			printf("\n");
			preenchidos = 1;
			if((lin < LIN) && (col < COL) && (valor > 0))
			{
				matriz[lin][col] = valor;	
			}
			
		}

	
	
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("\nmatriz[%i][%i] = %i", i, j, matriz[i][j]);
		}
		printf("\n");
	}
		
}
