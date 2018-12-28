#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool checkPalindrome(char * inputString)
{
	int qtd = strlen(inputString);
	int i, y = qtd - 1;
		    
	for(i = 0; i < qtd; i++)
	{	
	    if(inputString[i] != inputString[y])
	        return  false;
	    else
	    {
	        if(i == y)
	            return true;
	    } 
	    y--;
	}
}

char *RemoveSpace(char palavra[])
{
	char *fixPalavra;
	fixPalavra = (char*)calloc(0, sizeof(char));
	int qtd = strlen(palavra);
	int i, y = 0;
	
	for(i = 0; i < qtd; i++)
	{
		if(palavra[i] != ' ')
		{	
			fixPalavra[y] = palavra[i];	
			y++;
		}
	}
	return fixPalavra;
	free(fixPalavra);
}

main()
{
	char palOriginal[30], palCorreta[30];
	int i;
	
	fflush(stdin);
	gets(palOriginal);
	
	strcpy(palCorreta, RemoveSpace(palOriginal));
	
	int qtd = strlen(palCorreta);
	
	for(i = 0; i < qtd; i++)
		printf("| %c |", palCorreta[i]);

	bool res = checkPalindrome(palCorreta);
	
	res ? printf("\nE polindromo") : printf("\nnao eh polindromo");
}
