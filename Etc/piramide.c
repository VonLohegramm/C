#include <stdio.h>

main()
{
	int num, qtd, espaco;
	int i, y, z, x, maior;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	for(i = 1; i <= num; i++)
	{
		printf("\n");
		qtd = i * 2 - 1;
		z = 1;
		maior = z;
		
		espaco = num - i;
		
		for(x = 1; x <= espaco; x++)
			printf(" ");
		
		for(y = 1; y <= qtd; y++)
		{ 
			if(i != 1)
			{
				if(maior >= i)
				{
					printf("%i", z);	
					z--;
				}	
				else
				{
					printf("%i", z);
					z++;			
				}
			}
			else
			{
				printf("%i", z);
				z++;	
			}
			if(z >  maior)
				maior = z;	
		}
	}
}
