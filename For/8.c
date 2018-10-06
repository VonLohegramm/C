#include <stdio.h>

int main(main)
{
	int contador = 0, num = 0, menor, maior;
	while(contador < 5)
	{
		printf("Digite numero: ");
		scanf("%d", &num);
		//Na primeira passagem o primeiro NUMERO é  sempre o maior e o menor	
		if(contador == 0)
		{
			menor = num;
			maior = num;
		}	
		if(num > maior)
		{
			maior = num;
		}
		if(num < menor)
		{
			menor = num;
		}
		contador++;
	}
	printf("Maior: %d\n", maior);
	printf("Menor: %d", menor);
}
