#include <stdio.h>

void main (main)
{
	float horaNormal, horaExtra, salario;
	printf("Digite quantidade de horas normais: ");
	scanf("%f", &horaNormal);
	
	printf("Digite quantidade de horas extras: ");
	scanf("%f", &horaExtra);
	
	salario = (horaNormal * 10) + (horaExtra * 15);
	
	printf("O seu salario é de: %.2f", salario);
}
