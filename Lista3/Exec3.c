#include <stdio.h>

void main (main)
{
	float altura, peso, imc;
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	
	printf("Digite seu peso: \n");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura / 10000);
	
	printf("Seu Imc: %.2f", imc);
	
	if(imc < 18.5)
	{
		printf("Abaixo do peso");
	}
	else if(imc >= 18.5 && imc < 25.0)
	{
		printf("Peso ideal");
	}
	else if(imc >= 25.0 && imc < 30.0)
	{
		printf("Peso Sobrepeso");
	}
	else if(imc >= 30.0 && imc < 35.0)
	{
		printf("Obesidade grau I");
	}
	else if(imc >= 35.0 && imc < 40.0)
	{
		printf("Obesidade Grau II");
	}
	else
	{
		printf("Obesidade Grau III");
	}
}
