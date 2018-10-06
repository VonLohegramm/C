#include <stdio.h>

void main(main)
{
	float nota1, nota2, media, faltou;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 5)
	{
		printf("Aprovado");
	}
	else
	{
		faltou = 5 - media;
		printf("Reprovado, e faltou %.2f para atingir a me", faltou);
	}
	
	
}
