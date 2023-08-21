#include "main.h"

/**
 *print_rev - function to reverse a string
 *@s: function name(pointer)
 *Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int n;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (n = len; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
