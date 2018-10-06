#include <stdio.h>

void main (main)
{
	int cont = 0, soma = 0, par = 0;
	
	while(par <= 10)
	{
		if(cont % 2 == 0)
		{
			soma = soma + cont;
			printf("%i\n", soma);
			par++;
		}
		cont++;
	}
}
