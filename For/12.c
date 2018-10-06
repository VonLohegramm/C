#include <stdio.h>

void main(main)
{
	int num;
	
	printf("Digite um numero posiitovo\n: ");
	scanf("%i", &num);
	
	while(num >= 0)
	{
		printf("%i ", num);
		num--;
	}
}
