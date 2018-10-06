#include <stdio.h>

void main(main)
{
	int num, cont = 0, par = 0;
	
	printf("Digite um numero posiitovo\n: ");
	scanf("%i", &num);
	
	if(num % 2 == 1)
	{
		printf("Numero nao e par!! \n");
	}
	else
	{		
		while(par < num)
		{
			if(cont % 2 == 0)
			{
				printf("%i ", cont);
				par = cont;
			}
			cont++;
		}
	}
}
