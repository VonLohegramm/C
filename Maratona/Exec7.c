#include <stdio.h>

void main (main)
{
	int peca1, peca2, numPeca1, numPeca2;
	double valor1, valor2, final;
	
	scanf("%i %i %lf", &peca1,&numPeca1, &valor1);
	scanf("%i %i %lf", &peca2,&numPeca2, &valor2);
	
	final = (numPeca1* valor1) + (numPeca2 * valor2);
	
	printf("VALOR A PAGAR: R$ %.2lf\n", final);
}

