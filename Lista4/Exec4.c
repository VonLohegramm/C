#include <stdio.h>

void main(main)
{
	int num1, num2, dif, con;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2)
	{
		for(con = num1 - 1; con > num2; con--)
		{
			printf("%d\n",con);
		}
	}
	else
	{
		for(con = num2 - 1; con > num1; con--)
		{
			printf("%d\n",con);
		}		
	}

}
