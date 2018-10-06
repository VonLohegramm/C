#include <stdio.h>
#include <locale.h>

void main (void)
{
	float altura, base, area;
	setlocale(LC_ALL, "Portuguese");
	
	//%d usado para int, %f para float, %s para string
	
	printf("Digite a altura \n");
	scanf("%f", &altura);
	
	printf("Digite a base \n");
	scanf("%f", &base);
	
	area = altura * base;
	printf("A area é %.1f", area);
	
}
