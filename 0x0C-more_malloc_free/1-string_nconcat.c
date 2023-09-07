#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - Concatenate two strings
 *@s1: destination string
 *@s2: src string
 *@n: length
 *Return: pointer to concatenated string
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int len1;
	unsigned int len2;

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
	if (n >= len2)
	{
	str = (char *)malloc(len1 + len2 + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strcat(str, s2);
	}
	else
	{
	str = (char *)malloc(len1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	for (i = 0; i < n; i++)
	{
	str[len1 + i] = s2[i];
	}
	str[len1 + n] = '\0';
	}
	return (str);
}


