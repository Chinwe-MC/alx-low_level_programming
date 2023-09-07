#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - function that allocates memory for an array
 *@nmemb: parameter
 *@size: parameter
 *Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t length;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	length = nmemb * size;
	ptr = malloc(length);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, length);
	return (ptr);
}



