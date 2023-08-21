#include "main.h"
#include <stdio.h>

/**
 *print_array - print numbers in an array
 *@a: function parameter
 *@n: function parameter
 *Return: void
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	printf("\n");
}
