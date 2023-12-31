#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 *_strdup - Duplicate a char passed as arg using strdup and
 i*assign it to a new memory s
 *@str: char to duplicate
 *Return: pointer to new space in memory
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);
	s = strdup(str);
	return (s);
}
