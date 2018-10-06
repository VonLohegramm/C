#include <stdio.h>

void main(main)
{
	int mulheres, homem, latas, pao;
	float gramas;
	
	printf("Digite quantidade de mulheres: \n");
	scanf("%i", &mulheres);
	printf("Digite quantidade de homens: \n");
	scanf("%i", &homem);
	
	latas = (homem * 4) + (mulheres * 1);
	gramas = (((float)homem * 600) + (mulheres * 300)) / 1000;
	pao = (homem * 3) + (mulheres * 1);
	
	printf("Na festa tera %i homens e %i mulheres.\nO Joao precisara comprar %i latas de cerveja e %.3f KG de carne e %i paes", homem, mulheres, latas, gramas, pao);
}
