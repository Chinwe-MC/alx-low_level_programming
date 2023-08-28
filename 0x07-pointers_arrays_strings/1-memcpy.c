#include "main.h"

/**
 * _memcpy - copy memory block from source to destination
 *@dest: function parameter
 *@src: function parameter
 *@n: function parameter
 *Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
