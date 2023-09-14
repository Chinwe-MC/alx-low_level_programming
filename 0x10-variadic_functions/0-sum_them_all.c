#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - function name
 *@n: function parameter
 *Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list access_var;
	unsigned int i;
	int num, total = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(access_var, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(access_var, int);
		total = total + num;
	}
	va_end(access_var);
	return (total);
}

