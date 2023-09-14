#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - print string in variadic functions
 *@separator: string to print
 *@n: number of strings
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	const char *word;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(str, const char *);
		if (word != NULL)
		{
			printf("%s", word);
		}
		else
		{
			printf("nil");
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
