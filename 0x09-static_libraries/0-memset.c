#include "main.h"
#include <string.h>

/**
 *char *_memset - Function name
 *@s: parameter name
 *@b: parameter name
 *@n: prameter name
 *Return: Always 0 Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
