#include "main.h"
#include <ctype.h>
#include <stdbool.h>
/**
 **cap_string - capitalize each word
 *@str: function parameter
 *Return: char
 */

char *cap_string(char *str)
{
	bool word = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (isspace(str[i]))
	{
		word = true;
	}
	else
	{
		if (word)
		{
			str[i] = toupper(str[i]);
			word = false;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
	}
	return (str);
}

