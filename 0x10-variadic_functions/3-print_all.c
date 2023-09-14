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
	int i, num = 0;
	double f;
	va_list all;
	char *s, const char *form = format;

	va_start(all, format);
	while (*form)
	{
		if (num)
			printf(", ");
		switch (*form)
		{
			case 'i':
				i = va_arg(all, int);
				printf("%d", i);
				num = 1;
				break;
			case 'f':
				f = va_arg(all, double);
				printf("%f", f);
				num = 1;
				break;
			case 'c':
				c = va_arg(all, int);
				printf("%c", (char)c);
				num = 1;
				break;
			case 's':
				s = va_arg(all, char *);
				if (s != NULL)
					printf("%s", s);
				else
					printf("(nil)");
				num = 1;
				break;
		}
		form++;
	}
	printf("\n");
	va_end(all);
}
