#include "function_pointers.h"
#include <stddef.h>

/**
 *print_name - function name
 *@f: function pointer
 *@name: function argument
 *Return: void
 */


void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
