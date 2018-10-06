#include <stdio.h>

void main(main)
{
	float num[3];
	int cont;
	for(cont = 0;cont < 3;cont++)
	{
		printf("Digite o valor do lado do triangulo: ");
		scanf("%f", &num[cont]);
	}
	if(num[0] == num[1] && num[1] == num[2])
	{
		printf("Triangulo Equilatero");
	}
	else if(num[0] == num[1] || num[1] == num[2] || num[0] == num[2])
	{
		printf("Triangulo ISOSCELES");
	}
	else
	{
		printf("Triangulo Escaleno");
	}
	
}
