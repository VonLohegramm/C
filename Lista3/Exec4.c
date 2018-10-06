#include <stdio.h>

void main(main)
{
	int num1, num2, num3;
	printf("Digite numero: ");
	scanf("%d", &num1);
	printf("Digite numero: ");
	scanf("%d", &num2);
	printf("Digite numero: ");
	scanf("%d", &num3);
	
	if(num1 == num2)
	{
		printf("Numero repetivo: %d", num2);
	}
	else if(num2 == num3)
	{
		printf("Numero repetivo: %d", num2);
	}
	else if(num1 == num3)
	{
		printf("Numero repetivo: %d", num1);
	}
	else
	{
		printf("Nao tem repetivo");
	}
}
