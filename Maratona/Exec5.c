#include <stdio.h>

void main (main)
{
	int numF, horas;
	float valor, salario;
	scanf("%i", &numF);
	scanf("%i", &horas);
	scanf("%f", &valor);
	salario = horas * (float)valor;
	printf("NUMBER = %i", numF);
	printf("\nSALARY = U$ %.2f\n", salario);
}
