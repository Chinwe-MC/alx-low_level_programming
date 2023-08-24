#include "main.h"

/**
 **_strcat - function to concatenate two strings
 *@dest: function parameter
 *@src: function parameter
 *Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *new_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (new_dest);
}
