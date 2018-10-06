#include <stdio.h>

void main (main)
{
	float produtoA = 22.50, produtoB = 33.10, produtoC = 53.53, total;
	int qtdA, qtdB, qtdC;
	
	printf("Quantidade vendidos do produto 1\n");
	scanf("%i", &qtdA);
	printf("Quantidade vendidos do produto 2\n");
	scanf("%i", &qtdB);
	printf("Quantidade vendidos do produto 3\n");
	scanf("%i", &qtdC);
	
	printf("\nTotal de venda do produto1: %.2f", qtdA * produtoA);
	printf("\nTotal de venda do produto2: %.2f", qtdB * produtoB);
	printf("\nTotal de venda do produto2: %.2f", qtdC * produtoC);
	
	total =  (qtdA * produtoA) + (qtdB * produtoB) + (qtdC * produtoC);
	printf("\nO total de vendas de todos os produtos: %.2f", total);
	printf("\nO total de imposto sobre as vendas: %.2f",total * 0.12);
	printf("\nO valor para guardado para a poupança: %.2f",total * 0.15);
}
