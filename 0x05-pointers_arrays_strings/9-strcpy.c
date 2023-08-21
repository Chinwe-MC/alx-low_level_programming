#include "main.h"


/**
 **_strcpy - function name
 *@dest: function parameter
 *@src: function parameter
 *Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;
	int i;

	while (*(src + counter) != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		dest[i] = src[i];
	}
	dest[counter] = '\0';
	return (dest);
}
