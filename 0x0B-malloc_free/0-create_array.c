#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *create_array - A function that creates and initializes an array with chars
 *@size: size of the array
 *@c: character initialized to the array
 *Return: a pointer to the array characters
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return NULL;
	arr = (char *)malloc(size * sizeof(char));
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}


