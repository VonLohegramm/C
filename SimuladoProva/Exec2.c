#include <stdio.h>
 void main(main)
 {
 	int num[2], meio;
 	
 	printf("Digite o primeiro numero: \n");
 	scanf("%i", &num[0]);
 	printf("Digite o segundo numero: \n");
 	scanf("%i", &num[1]);
 	printf("Digiite o terceiro numero: \n");
 	scanf("%i", &num[2]);
 	
	if((num[0] > num[1] && num[0] < num[2]) || (num[0] < num [1] && num[0] > num[2]))
	{
		meio = num[0];
	}
	
	else if((num[1] > num[0] && num[1] < num[2]) || (num[1] < num [0] && num[1] > num[2]))
	{
		meio = num[1];
	}
	
	else if((num[2] > num[0] && num[2] < num[1]) || (num[2] < num [0] && num[2] > num[1]))
	{
		meio = num[2];
	}
	
	printf("Numero intermediario: %i", meio);
 }
