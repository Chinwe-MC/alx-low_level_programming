#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *print_numbers - function to print numbers
 *@separator: function argument
 *@n: function argument
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_num;
	unsigned int i, num;

	va_start(print_num, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(print_num, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
}


