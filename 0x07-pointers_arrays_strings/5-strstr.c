#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 *_strstr - search fro substring in a string
 *@haystack:function name
 *@needle: name to search for in haystack
 *Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *found = strstr(haystack, needle);

	if (found)
	{
		return (found);
	}
	else
	{
		return (NULL);
	}
}
