#include <stdio.h>
#include <locale.h>

void main (main)
{
	setlocale(LC_ALL, "Portuguese");
	//Variaveis
	system("color 0A");
	float provaT1, provaT2, provaP1, provaP2, mediaT, mediaP, media;
	
	//Entrada de dados
	printf("Digite a nota da primeira nota teorica: ");
	scanf("%f", &provaT1);
	
	printf("Digite a nota da segunda nota teorica: ");
	scanf("%f", &provaT2);	
	
	printf("Digite a da primeira nota pratica: ");
	scanf("%f", &provaP1);
	
	printf("Digite a nota da segunda nota pratica: ");
	scanf("%f", &provaP2);
	
	//Processamento
	mediaT = (provaT1 + provaT2) / 2;
	mediaP = (provaP1 + provaP2) / 2;
	
	media = (mediaT * 0.6) + (mediaP * 0.4);
	
	//Saida
	printf("Media: é %.2f", media);
	
	
}
