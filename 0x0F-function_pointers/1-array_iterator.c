#include "function_pointers.h"
#include <stddef.h>


/**
 *array_iterator - function name
 *@array: function argumnet
 *@size: function argument
 *@action: function pointer
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{

		action(array[i]);
	}
}
