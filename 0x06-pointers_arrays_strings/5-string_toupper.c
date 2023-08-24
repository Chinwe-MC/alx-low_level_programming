#include "main.h"
#include <ctype.h>

/**
 **string_toupper - function to convert to uppercase
 *@str: function parameter
 *Return: char
 */


char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}

	return (str);
}
