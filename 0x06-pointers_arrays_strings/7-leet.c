#include "main.h"

/**
 **leet - encode
 *@c: function parameter
 *Return: char
 */

char *leet(char *c)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = b[j];
			}
		}
	}
	return (c);
}

