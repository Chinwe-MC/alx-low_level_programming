#include "main.h"
#include <string.h>

/**
 **_strcat - function to concatenate two strings
 *@dest: function parameter
 *@src: function parameter
 *Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *new_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)	
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (new_dest);
}
