#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 *_strpbrk - function name
 *@s: parameter
 *@accept: parameter
 *Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
	{
		return (s);
	}
	s++;
	}
	return (NULL);
}
