#include <stdio.h>

void main(main)
{
	int con, par;
	
	for(con = 10;con <= 80;con++)
	{
		if(con % 2 == 0)
		{
			par = con;
			printf("%d\n", par);
		}
	}
}
