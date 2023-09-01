#include "main.h"
#include <string.h>

/**
 **_strncpy - function to concatenate two strings
 *@dest: function parameter
 *@src: function parameter
 *@n: function parameter
 *Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *new_dest = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (new_dest);
}
