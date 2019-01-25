#include <stdio.h>
/* Link do exercicio https://app.codesignal.com/arcade/intro/level-2/bq2XnSr5kbHqpHGJC */

int makeArrayConsecutive2(int *array, int len)
{
	int i, y, qtd = 0, qtd2;
	int menor = array[0], maior = array[0];
	
	for(i = 0; i < len; i++)
	{
		if(array[i] < menor)
			menor = array[i];
			
		if(array[i] > maior)
			maior = array[i];
	}
	
	for(i = menor; i < maior; i++)
	{
		qtd2 = 0;
		for(y = 0; y < len; y++)
		{
			if(i == array[y])
				qtd2++;
		}
		if(qtd2 == 0)
			qtd++;
			
	}
	return qtd;
}


main()
{
	int array[1];
	int i, qtd;
	
	for(i = 0; i < 1; i++)
	{
		scanf("%i", &array[i]);
	}
	int tam = sizeof(array) / sizeof(array[0]);
	qtd = makeArrayConsecutive2(array, tam);
	
	printf("Valor: %i", qtd);
}
