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
	printf("A media dos numero: %d", total/5);
}
