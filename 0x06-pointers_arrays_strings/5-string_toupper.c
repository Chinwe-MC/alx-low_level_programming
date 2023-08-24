#include "main.h"
#include <ctype.h>

/**
 **string_toupper - function to convert to uppercase
 *@str: function parameter
 *Return: char
 */


char *string_toupper(char *str)
{
	if (*str >= 97 || *str <= 122)
	{
		*str = toupper(*str);
	}
	return (str);
}
