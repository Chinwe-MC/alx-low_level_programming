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
	int i;
	int length1 = 0;
	int length2 = 0;
	char *temp;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 == NULL)
		return strdup(s2);
	else if (s2 == NULL)
		return strdup(s1);
	/*get length of s1*/
	while (s1[length1] != '\0')
	{
		length1++;
	}
	/*Get lengtt of s2*/
	while (s2[length2] != '\0')
	{
		length2++;
	}
	/*allocate memory for new string*/
	temp = (char *)malloc(length1 + length2 + 1 * sizeof(char));
	for (i = 0; i < length1; i++)
	{
		temp[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		temp[length1 + i] = s2[i];
	}
	temp[length1 + length2] = '\0';
	if (s1 == NULL)
	{
		return (NULL);
	}
	return (temp);

}
