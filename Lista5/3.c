#include <stdio.h>

void main (main)
{
	int qtd, num, total,par = 0, cont = 0;
	
	printf("Quantos numeros deseja?\n");
	scanf("%i", &qtd);
	
	while(cont < qtd)
	{
		printf("---------------\n");
		scanf("%i", &num);
		if(num > 0)
		{
			total = total + num;
			par++;
		}
		cont++;
	}
	printf("\nA media e: %.2f", total / (float)par);
}
