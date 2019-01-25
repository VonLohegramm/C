#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int findmatch(char *p, char *t)
{
	int i, j;
	int plen, tlen;
	
	plen = strlen(p);
	tlen = strlen(t);

	for(i = 0; i <= (tlen - plen); i++)
	{
		j = 0;
		while((j < plen) && (t[i+j] == p[j]))
			j++;
		if(j == plen)
			return(i);
	}
		return(-1);
}


main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	char *ppal = (char*)malloc(30 * sizeof(char));
	char *ppal2 = (char*)malloc(30 * sizeof(char));;
	
	fflush(stdin);
	gets(ppal);
	fflush(stdin);
	gets(ppal2);
	
		
	valor = findmatch(ppal, ppal2);
	
	valor == -1 ? printf("Palavra não existe na frase") : printf("Palavra encontrada a partidar da posição: %i", valor + 1);
}
