#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - function name
 *@format: function argument
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int i, double f, char c, char *s;
	va_list all;

	va_start(all, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				i = va_arg(all, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(all, double);
				printf("%f", f);
				break;
			case 'c':
				c = va_arg(all, int);
				printf("%c", (char)c);
				break;
			case 's':
				s = va_arg(all, char *);
				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
				break;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(all);
}
