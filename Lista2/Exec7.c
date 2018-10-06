#include <stdio.h>

void main (main)
{
	float preco, minutos, extra;
	printf("Quantos minutos foi utilizado: ");
	scanf("%f", &minutos);
	if(minutos > 50)
	{
		extra = minutos - 50;
		preco = 50.00 + (extra * 1.50);
	}
	else
	{
		preco = 50.00;
	}
	printf("O valor da conta e de: %.2f", preco);
	
}
