#include <stdio.h>

void main(main)
{
	int num, cont = 0;
	
	printf("Digite um numero posiitovo\n: ");
	scanf("%i", &num);
	
	while(cont <= num)
	{
		printf("%i ", cont);
		cont++;
	}
}
