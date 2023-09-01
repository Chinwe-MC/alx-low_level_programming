#include "main.h"

/**
 * _isupper - checks uppercase letter
 * @c: function parameter
 * Return: 0 if if true otherwise 1
 */



int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
