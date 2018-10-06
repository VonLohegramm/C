#include <stdio.h>

void main(main)
{
	int num1,num2,num3,maior;
	printf("Digite numero: ");
	scanf("%d", &num1);
	printf("Digite numero: ");
	scanf("%d", &num2);
	printf("Digite numero: ");
	scanf("%d", &num3);
	
	maior = num1;
	
	if(num2 > num1 && num2 > num3)
	{
		maior = num2;
	}
	else if(num3 > num1 && num3 > num2)
	{
		maior = num3;
	}
	
	printf("O maior e: %d", maior);
	
}
