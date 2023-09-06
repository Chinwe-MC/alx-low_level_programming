#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *str_concat - function to concatenate two strings
 *@s1: destination argument
 *@s2: source argument
 *Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);

}
