#include "main.h"

/**
 * print_most_numbers - Print numbers except 2 and 4
 * Return: void
 */


void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar('0' + i);
	}
	_putchar('\n');
}
