#include <stdio.h>

void main (main)
{
	double salarioFixo, vendas, salario;
	char nome[30];
	gets(nome);
	//printf("%s", nome);
	scanf("%lf", &salarioFixo);
	scanf("%lf", &vendas);
	salario = salarioFixo + (vendas * 0.15);
	printf("TOTAL = R$ %.2lf", salario);
	
}

