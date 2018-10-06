#include <stdio.h>

void main (void)
{
	float num, dobro;
	int cont;
	for(cont = 0; cont < 10;cont++)
	{
		printf("\n\nDigite numero: ");
		scanf("%f", &num);
		dobro = num * 2;
		printf("O dobro de %.2f = %.2f", num, dobro);
	}
}
