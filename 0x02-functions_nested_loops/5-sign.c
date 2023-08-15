#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 *
 * @n: function parameter int n
 *
 * Return: 1 if + sign, 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
