#include "main.h"
#include <ctype.h>

/**
 * print_numbers - function to print numbers
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
