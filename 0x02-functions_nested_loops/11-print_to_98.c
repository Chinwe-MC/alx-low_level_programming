#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */


void print_to_98(int n)
{
	
	int i;
	
	for (i = n;  i <= 98; i++)
	{
		if ( i <= 98)
		{
			printf("%d ", i);
			n++;
		}
	

		else if ( i > 98)
		{
			printf("%d ", i);
			n++;
		}
	
	}
	printf("\n");
	
}

