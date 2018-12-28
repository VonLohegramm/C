#include <stdio.h>

main()
{
	int vetor[5];
	int i = 0, j = 0, x = 0;
	
	for(i = 0; i < 5; i++)
	{
		scanf("%i", &vetor[i]);	
	}
	
	for(i = 1; i < 5; i++)
  	{ 
    	x = vetor[i];
    	j = i - 1;
    	while (x < vetor[j])
		{
        	vetor[j+1] = vetor[j];
        	j--;
    	}
    	vetor[j + 1] = x;
  	}	 
	   
  	for(i = 0; i < 5; i++)
	{
		printf("\n%i", vetor[i]);	
	}
	
}
