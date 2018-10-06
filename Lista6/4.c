#include <stdio.h>

void main (main)
{
	float valorIntegral, valorMeia, total = 0;
	int qtdPessoa = 0, opcao, qtdIntegral = 0, qtdEstudante = 0, qtdIdoso;
	
	do
	{
		printf("Valor da entrada integral: ");
		scanf("%f", &valorIntegral);
		
		if(valorIntegral <= 0)
		{
			printf("\nO valor precisa ser positivo para gerar lucro, porfavor digite novamente!!\n\n");
		}
	}while(valorIntegral <= 0);
	
	valorMeia = valorIntegral / 2;
	
	do
	{
		printf("------------------------------------------------------------------------------------\n");
		printf("Digite os dados do cliente \n1 - Integral || 2 - Estudante || 3 - Idoso || 4 - Iniciar sessao\n\n");
		scanf("%i", &opcao);
		
		if(opcao == 1)
		{
			total = total + valorIntegral;
			qtdIntegral++;
			qtdPessoa++;
		}
		else if(opcao == 2)
		{
			total = total + valorMeia;
			qtdEstudante++;
			qtdPessoa++;
		}
		else if(opcao == 3)
		{
			total = total + valorMeia;
			qtdIdoso++;
			qtdPessoa++;
		}
		else if(opcao == 4)
		{
			printf("Sessao iniciada\n");
		}
		
	}while(qtdPessoa < 200 && opcao != 4);
	
	if(qtdPessoa == 200)
	{
		printf("\nSessao lotada\n");
	}
	
	printf("---------------------------------------------------------------------------------------\n");
	printf("\nO total Arrecadado: %.2f\n", total);
	printf("Valor medio pago por pessoa: %.2f\n", total/qtdPessoa);
	printf("Numero de integrais: %i\n", qtdIntegral);
	printf("Numero de estudantes: %i\n", qtdEstudante);
	printf("Numero de idosos: %i\n", qtdIdoso);
}
