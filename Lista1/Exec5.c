#include <stdio.h>
#include <locale.h>

void main (void)
{
	setlocale(LC_ALL, "Portuguese");
	float velocidade, tempo, espaco;
	
	printf("Digite o espa�o percorido ");
	scanf("%f", &espaco);
	
	printf("Digite o tempo ");
	scanf("%f", &tempo);
	
	velocidade = espaco / tempo;
	printf("Velocidade media: %.1f", velocidade);
}
