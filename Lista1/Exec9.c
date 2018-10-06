#include <stdio.h>

void main (void)
{
	float salarioBruto, salarioLiquido;
	
	printf("Digite o salario Bruto: ");
	scanf("%f", &salarioBruto);
	salarioLiquido = salarioBruto - (salarioBruto *0.37);
	printf("Salario Liquido: %.2f", salarioLiquido);
}
