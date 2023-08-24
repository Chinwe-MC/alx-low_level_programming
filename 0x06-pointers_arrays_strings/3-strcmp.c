#include "main.h"

/**
 *_strcmp - function that compares two strings
 *@s1: function parameter
 *@s2: function parameter
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int s1counter = 0;
	int s2counter = 0;

	while (*s1 != '\0')
	{
		s1counter++;
		s1++;
	}
	while (*s2 != '\0')
	{
		s2counter++;
		s2++;
	}
	if (s1counter < s2counter)
	{
		return (-15);
	}
	else if (s1counter > s2counter)
	{
		return (15);
	}
	return (0);
}
