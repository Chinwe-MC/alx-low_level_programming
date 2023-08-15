#include "main.h"

/**
 * main - printing lowercase alphabeths with _putchar
 *
 * Return: void
*/

void print_alphabet(void)
{

	char i = 97;

	while(i < 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	

}

