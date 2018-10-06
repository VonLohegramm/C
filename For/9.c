#include <stdio.h>

int main(main)
{
	int num, contador = 0,qtd = 0;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	/*for(contador = 1; contador <= num; contador++)
	{
		if(num % contador == 0)
		{
			qtd++;
		}
	}*/
	while(qtd < num)
	{
		if(contador % 2 == 1)
		{
			printf("%d\n",contador);
			qtd++;
		}
		contador++;
	}
}
