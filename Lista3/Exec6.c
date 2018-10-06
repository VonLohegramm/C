#include <stdio.h>
#include <conio.h>

void main(main)
{
	float num1, num2, resultado;
	char oper;
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);	
	printf("Digite a sua operação: ");
	scanf("%s", &oper);
	
	switch(oper)
	{
		case '+':
			resultado = num1 + num2;
			printf("Resultado: %.2f", resultado);
			break;
		case '/':
			resultado = num1 / num2;
			printf("Resultado: %.2f", resultado);
			break;
		case '*':
			resultado = num1 * num2;
			printf("Resultado: %.2f", resultado);
			break;
		case '-':
			resultado = num1 - num2;
			printf("Resultado: %.2f", resultado);
			break;
		default:
			printf("Operação invalida");	
		
	}
}
