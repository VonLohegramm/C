#include <stdio.h>

void main (main)
{
	float salarioBruto, salarioLiquido;
	printf("Digitre seu salario: ");
	scanf("%f", &salarioBruto);
	
	if(salarioBruto <= 2750.00)
	{
		salarioLiquido = salarioBruto  - (salarioBruto * 0.15);
	}
	else
	{
		salarioLiquido = salarioBruto - (salarioBruto * 0.25);
	}
	
	printf("Seu salario liquido: %.2f", salarioLiquido);
}
