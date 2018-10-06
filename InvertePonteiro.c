#include <stdio.h>
#include <string.h>

void Inverte(char *pal)
{
	char aux[30];
	int tam, i;
	
	//Achando o tamanho do ponteiro
	tam = strlen(pal);
	
	printf("Tamanho da string %i\n", tam);
	
	//Usando o for para armazenar o valor do ponteiro em um vetor auxiliar[],
	//Tem que diminuir o valor do 'tam', pois o vetor começa do '0'	
	for(i = tam-1; i >= 0; i--)
	{
		aux[i] = *pal++;		
	}
	
	//Quando usar '*pal++' o ponteiro avança uma posição, então é necessario retorna a posição '0'
	for(i = 0; i < tam; i++)
	{
		*pal--;		
	}
	
	//Aqui o valor do ponteiro recebe o valor do vetor auxiliar[] invertido
	for(i = 0; i < tam; i++)
	{
		*pal++ = aux[i];
	}
}

main()
{
	char palavra[30];
	int i;
	printf("Digite a palavra : ");
	gets(palavra);
	
	//Passando o vetor como parametro;
	Inverte(&palavra[0]);
	
	printf("\n%s", palavra);
}
