#include <stdio.h>

void main (main)
{
	int sexo, i, qtdHomens = 0, qtdMulheres = 0;
	float mAltura, fAltura, mMenor, mMaior, fMenor, fMaior, mediaAlturaFeminina = 0;
	for(i = 0; i < 4; i++)
	{
		printf("\n-------------------------------------------------------\n");
		printf("\nDigite seu sexo: 1 para masculino eh 2 para feminino: \n");
		scanf("%i", &sexo);
		
		if(sexo == 1)
		{
			printf("Digite sua altura: ");
			scanf("%f", &mAltura);
			
			if(qtdHomens == 0)
			{
				mMenor = mAltura;
				mMaior = mAltura;
			}
			if(mAltura < mMenor)
			{
				mMenor = mAltura;
			}
			if(mAltura > mMaior)
			{
				mMaior = mAltura;
			}
			qtdHomens++;
		}
		if(sexo == 2)
		{
			printf("Digite sua altura: ");
			scanf("%f", &fAltura);
			
			mediaAlturaFeminina = mediaAlturaFeminina + fAltura;
	
			if(qtdMulheres == 0)
			{
				fMenor = fAltura;
				fMaior = fAltura;
			}	
			if(fAltura < fMenor)
			{
				fMenor = fAltura;
			}
			if(fAltura > fMaior)
			{
				fMaior = fAltura;
			}
			qtdMulheres++;
		}
	}
	
	if(fMenor < mMenor)
	{
		printf("\nA menor altura: %.2f", fMenor);
	}
	else
	{
		printf("\nA menor altura: %.2f", mMenor);
	}
	printf("\nMenor altura dos homens: %.2f", mMenor);
	printf("\nMenor altura das mulheres: %.2f", fMenor);
	printf("\nQuantidade de homens: %i", qtdHomens);
	printf("\nMedia de altura feminina: %.2f", mediaAlturaFeminina / qtdMulheres);
	if(mMaior > fMaior)
	{
		printf("\nO sexo da pessoa mais alta eh masculino");
	}
	else
	{
		printf("\nO sexo da pessoa mais alta eh feminino");
	}
}
