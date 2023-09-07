#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - function to allocate memory
 *@b: function parameter
 *Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
