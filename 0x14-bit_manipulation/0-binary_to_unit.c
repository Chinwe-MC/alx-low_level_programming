#include <stdio.h>
#include "main.h"

/**
 *binary_to_unit - function name
 *@b: parameter
 *Return: output
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			output = output * 2 + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (output);
}


