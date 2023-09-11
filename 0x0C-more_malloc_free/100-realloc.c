#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 *
 *
 *
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *i;

	if (new_size > old_size)
	{
		new_size;
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		return (NULL)
	}
	i = malloc(old_size * new_size);
	if (i == NULL)
	{
		return (NULL):
	}
}

