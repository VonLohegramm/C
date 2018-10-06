#include <stdio.h>

void main(main)
{
	int num, cont = 0, par = 0;
	
	printf("Digite um numero posiitovo\n: ");
	scanf("%i", &num);
	
	while(par < num)
	{
		if(cont % 2 == 0)
		{
			printf("%i ", cont);
			par++;
		}
		cont++;
	}
}
