#include <stdio.h>

void main (main)
{
	int i = 0, filhos, mFilhos = 0, qtd = 0;
	float sal, mSalario = 0, maiorSalario = 0;
	
	while(i < 3)
	{
		printf("Salario: ");
		scanf("%f", &sal);
		printf("Numeros de filhos: ");
		scanf("%i", &filhos);
		
		mFilhos = mFilhos + filhos;
		mSalario = mSalario + sal;
		
		if(i == 0)
		{
			maiorSalario = sal;
		}
		
		if(sal > maiorSalario)
		{
			maiorSalario = sal;
		}
		
		if(sal <= 1000)
		{
			qtd++;
		}
		i++;
	}
	printf("\nA media a salarial eh: %.2f", (float)mSalario/i);
	printf("\nMedia de filhos: %.2f", (float)mFilhos/i);
	printf("\nO maior Salario da cidade: %.2f", maiorSalario);
	printf("\nO percentual de pessoas que ganham ate 1000.00 eh de: %.2f porcentos ", 100/i * (float)qtd);
}
