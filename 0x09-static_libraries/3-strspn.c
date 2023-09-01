#include "main.h"
#include <string.h>

/**
 *_strspn - Function name
 *@s: parameter
 *@accept: parameter
 *Return: counter
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		counter++;
		s++;
	}
	return (counter);
}
