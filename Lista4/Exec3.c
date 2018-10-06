#include <stdio.h>

void main(main)
{
	int num, cont;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for(cont = 0; cont <= 10; cont++)
	{
		printf("%d X %d = %d\n", num, cont, num * cont);
	}
}
