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
	int i;
	int length;

	length = strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}


}
