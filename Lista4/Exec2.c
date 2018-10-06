#include <stdio.h>

void main(void)
{
	int num, cont;
	
	for(cont = 0;cont < 10;cont++)
	{
		printf("\nDigite um numero: ");
		scanf("%d", &num);
		if(num > 0 )
		{
			printf("Positivo");
		}
		else if(num < 0 )
		{
			printf("Negativo");
		}
		else
		{
			printf("Nulo");
		}
	}
}
