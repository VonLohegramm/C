#include <stdio.h>

void main (main)
{
	int valor;
	
	printf("Digite o valor: \n");
	scanf("%i", &valor);
	
	if(valor < 10)
	{
		printf("AAAA ");
	}
	else if(valor > 10 && valor <= 20)
	{
		printf("BBBB ");
	}
	if(valor > 10 || valor == 2)
	{
		printf("CCCC ");
	}
	else if(valor < -10)
	{
		printf("DDDD ");
	}
	else
	{
		printf("EEEE ");
	}
}
