#include <stdio.h>
#include "main.h"

/**
 *clear_bit - Function name
 *@n: parameter
 *@index: parameter
 *Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}

