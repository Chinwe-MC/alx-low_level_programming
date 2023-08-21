#include "main.h"

/**
 *rev_string - reverse a string
 *@s:  function parameter
 *Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int len = 0;
	int n;

	while (s[len] != '\0')
	{
		len++;
	}
	for (n = 0; n < len; n++)
	{
		len--;
		rev = s[n];
		s[n] = s[len];
		s[len] = rev;
	}
}
