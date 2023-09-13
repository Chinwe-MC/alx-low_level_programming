#include "function_pointers.h"


/**
 *print_name - function name
 *@f: function pointer
 *@name: function argument
 *Return: void
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
