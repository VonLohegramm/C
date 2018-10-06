#include <stdio.h>

int main(main)
{
	int contador, vezes = 0;
	
	while(vezes < 3)
	{
		for(contador = 1; contador <=100; contador++)
		{

			printf("%d\n", contador);
			if(contador == 100)
			{
				vezes++;
			}
		}
	}
}
