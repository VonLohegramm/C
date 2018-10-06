#include <stdio.h>
#include <locale.h>

void main (void)
{
	float nota1, nota2, media;
	setlocale(LC_ALL, "Portuguese");
	
	//%d usado para int, %f para float, %s para string
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	printf("Sua media é %.1f", media);
	
}
