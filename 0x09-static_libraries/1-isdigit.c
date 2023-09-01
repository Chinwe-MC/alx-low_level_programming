#include "main.h"

/**
 * _isdigit - Check ifits a digit
 * @c: function parameter
 * Return: 1 if success else 0
 */

int _isdigit(int c)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		if (c >= 48 && c <= 57)
		{
		return (1);
		}
	}

	return (0);


}
