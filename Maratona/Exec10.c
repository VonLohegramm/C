#include <stdio.h>

void main (main)
{
	int a, b, c, m, m2;
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	m = (a + b + abs(a - b)) / 2;
	m2 = (m + c + abs(m - c)) / 2;
	printf("%i eh o maior\n", m2);
}
