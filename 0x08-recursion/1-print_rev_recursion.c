#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_print_rev_recursion - function to print in reverse
 *@s: function parameter
 *Return: void
 */


void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
