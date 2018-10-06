#include <stdio.h>

int main(main)
{
	float contador = 0, num = 0, total = 0, divisor = 0;
	
	while(contador < 5)
	{
		printf("Digite numero: ");
		scanf("%f", &num);
		if(num > 0)
		{
			total = total + num;
			divisor++;
		}
		contador++;
	}
	printf("A media dos numero: %.2f", total/divisor);
}
