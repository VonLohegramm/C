#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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

main()
{
	char pal[30];
	
	scanf("%s", pal);

	bool res = checkPalindrome(pal);
	
	res ? printf("E ternario") : printf("nao eh ternario");
}
