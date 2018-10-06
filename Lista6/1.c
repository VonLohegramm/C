#include <stdio.h>

void main(void){
	
	int menu, confirma=0;
	float n1, n2, resultado;
	
	do{
		printf("\n\n1.Soma\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n5.Sair\n\n");
		scanf("%i", &menu);
		
		if(menu <=0 || menu > 5){
			printf("\nOpcao Invalida!");
		}
		else if(menu > 0 && menu < 5)
		{			
			printf("\nO primeiro numero: ");
			scanf("%f", &n1);
			printf("O segundo numero: ");
			scanf("%f", &n2);
		
			switch(menu)
			{
				case 1 :
					resultado = n1 + n2;
				break;
				
				case 2 :
					resultado = n1 - n2;
				break;
				
				case 3 :
					resultado = n1 * n2;
				break;
				
				case 4 :
					resultado = n1 / n2;
				break;
			}
			printf("Resultado: %.2f", resultado);
		}
		else{
			if(menu == 5){
			   do{
			   	 printf("\nConfirma?\n1. Sim - 2. Nao\n");
			     scanf("%i", &confirma);
			   } while(confirma < 1 || confirma > 2);
			}
		}
	}while(menu != 5 || confirma != 1);
}
