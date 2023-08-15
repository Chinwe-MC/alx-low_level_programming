#include "main.h"

/**
 * print_alphabet_x10 - function prints alphabet ten times
 *
 * Return: void
*/



void print_alphabet_x10(void)
{

	char c = 97;
	int i;

	for (i = 48; i <= 57; i++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);

		}
		_putchar('\n');
	}
}

