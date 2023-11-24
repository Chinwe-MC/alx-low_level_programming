#include <stdio.h>
#include "main.h"

/**
 *get_bit - function name
 *@n: parameter name
 *@index: parameter
 *Return: Always 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divider, check;

	if (index >(sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	divider = 1 << index;
	check = n & divider;
	if ( check == divider)
	{
		return (1);
	}
	return (0);
}
