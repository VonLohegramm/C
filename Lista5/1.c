#include <stdio.h>

void main (main)
{
	int i = 0;
	float num, media, total = 0;
	while(i < 10)
	{
		scanf("%f", &num);
		total = total + num;
		i++;
	}
	media = total / i;
	printf("%.2f", media);
}
