#include <stdio.h>

void main (main)
{
	int qtdVeiculos, cont, pesoPesado = 0,qtdPesado = 0, pesoLeve = 0, qtdLeve = 0;
	float pesoMedioPesado, peso, pesoMedioLeve = 0, maiorPesoPesado = 0, maiorPesoLeve = 0;
	
	printf("Digite a Quantidade de veiculos: ");
	scanf("%i", &qtdVeiculos);
	
	for(cont = 0; cont < qtdVeiculos; cont++)
	{
		printf("\n\nDigite o peso do veiculo: ");
		scanf("%f", &peso);
		if(peso >= 2000)
		{
			printf("\nVeiculo Pesado!!");
			pesoPesado = pesoPesado + peso;
			qtdPesado = qtdPesado + 1;
			if(peso > maiorPesoPesado)
			{
				maiorPesoPesado = peso;
			}
		}
		else if(peso < 2000)
		{
			printf("\nVeiculo Leve!!");
			pesoLeve = pesoLeve + peso;
			qtdLeve = qtdLeve + 1;
			if(peso > maiorPesoLeve)
			{
				maiorPesoLeve = peso;
			}
		}
	}
	if(qtdPesado > 0 )
	{
		pesoMedioPesado = (float)pesoPesado/qtdPesado;	
	}
	else if(qtdPesado == 0)
	{
		pesoMedioPesado = 0;
	}
	if(qtdLeve > 0)
	{
		pesoMedioLeve = (float)pesoLeve/qtdLeve;
	}
	else if(qtdLeve == 0)
	{
		pesoMedioLeve = 0;
	}
	
	printf("\n\nPeso medio dos veiculos pesados %.2f",pesoMedioPesado);
	printf("\nMaior peso do Pesado %.2f",maiorPesoPesado);
	printf("\n\nPeso medio dos veiculos leve %.2f",pesoMedioLeve);
	printf("\nMaior peso do Leve %.2f", maiorPesoLeve);
}
