#include "main.h"

/**
 *_puts - function name
 *@str: function parameter
 *Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
