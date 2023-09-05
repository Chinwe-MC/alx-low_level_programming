#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 *_strdup - allocates a new memory and duplicate the char argument using strdup
 *and assign to the new memory
 *@str: char to duplicate
 *Return: pointer to new space in memory
 */

char *_strdup(char *str)
{

	char *s = (char *)malloc(sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	return (s);
}
