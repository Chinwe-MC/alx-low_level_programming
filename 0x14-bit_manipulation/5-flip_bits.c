#include <stdio.h>
#include "main.h"

/**
 *flip_bits - function name
 *@n: parameter name
 *@m: parameter name
 *Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int a;
	unsigned long int j = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		a = j >> i;
		if (a & 1)
		{
			count++;
		}
	}
	return (count);
}
