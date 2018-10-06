#include <stdio.h>

int main(main)
{
	int num, multiplo;
	multiplo = 0;
	num = 1;
	while(num > 0)
	{
		if(num % 3 == 0)
		{
			printf ("\nO numero %d e multiplo de 3.",num);
			multiplo++;
		}
		if(multiplo == 5)
		{
			break;
		}
		num ++;
	}
}
