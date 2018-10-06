#include <stdio.h>
#include <locale.h>

void main (void)
{
	float metros, centimetros;
	setlocale(LC_ALL, "Portuguese");
	
	//%d usado para int, %f para float, %s para string
	
	printf("Digite metros: \n");
	scanf("%f", &metros);

	printf("A area é %.1f", metros*100);
	
}
