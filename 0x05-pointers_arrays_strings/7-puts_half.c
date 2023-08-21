#include "main.h"

/**
 *puts_half - print second half of a string
 *@str: function parameter
 *Return: void
 */

void puts_half(char *str)
{
	int n;
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	n = (length + 1) / 2;
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
