#include <stdio.h>

void main (main)
{
	float nota1, nota2, media, mediaAlunos = 0;
	int i;
	
	for(i = 0; i < 5; i++)
	{
		do
		{
			printf("Digite sua primeira nota: ");
			scanf("%f", &nota1);
			if(nota1 < 0 || nota1 > 10)
			{
				printf("valor invalido!!, por favor digite novamente\n");
			}
		}while(nota1 < 0 || nota1 > 10);
		printf("--------------------------------------\n");
		do
		{
			printf("Digite sua segunda nota: ");
			scanf("%f", &nota2);
			if(nota2 < 0 || nota2 > 10)
			{
				printf("valor invalido!!, por favor digite novamente\n");
			}
		}while(nota2 < 0 || nota2 > 10);
		
		media = (nota1 + nota2) / 2;
		mediaAlunos = mediaAlunos + media;
		
		printf("---------------------------------------\n");
		printf("\nPrimeira nota: %.2f", nota1);
		printf("\nSegunda nota: %.2f\n", nota2);
		printf("A sua media eh: %f\n\n", media);
	}
	
	printf("A media de %i alunos foram de: %f", i, mediaAlunos / i);
}
