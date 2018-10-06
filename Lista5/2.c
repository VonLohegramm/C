#include <stdio.h>

void main (main)
{
	int i, num, pos = 0, neg = 0;

	for(i = 0;i < 5;i++)
	{
		scanf("%i", &num);
		if(num > 0)
		{
			pos++;
		}
		if(num < 0)
		{
			neg++;
		}
	}
	printf("\n%i numeros positivos e %i numeros negativos", pos, neg);
}
