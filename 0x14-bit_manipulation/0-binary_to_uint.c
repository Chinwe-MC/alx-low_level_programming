#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function name
 * @b: parameter
 * Return: output
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		output <<= 1;
		if (b[i] == '1')
		{
			output += 1;
		}
	}
	return (output);
}
