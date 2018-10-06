#include  <stdio.h>

void main (main)
{
	float nTeor, nPrat, nFinal;
	int con;
	
	for(con = 1; con <= 50; con++)
	{
		printf("\n\nDigite a nota da prova teorica do %d aluno: \n", con);
		scanf("%f", &nTeor);
		printf("Digite a nota da prova pratica do %d aluno: \n", con);
		scanf("%f", &nPrat);
		
		nFinal = (nTeor * 0.6) + (nPrat * 0.4);
		printf("Sua nota final e: %.2f\n", nFinal);
		if(nFinal >= 7)
		{
			printf("VC FOI BEM!!");
		}
		else if(nFinal >= 5 && nFinal < 7)
		{
			printf("VC FOI RAZOAVEL!!");
		}
		else
		{
			printf("VC FOI MAL!!");
		}
	}
}
