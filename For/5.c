#include <stdio.h>

int main(main)
{
	int contador = 0, num = 0,total = 0;
	
	while(contador < 5)
	{
		printf("Digite numero: ");
		scanf("%d", &num);
		total = total + num;
		contador++;
	}
	printf("Soma dos numero: %d", total);
}
