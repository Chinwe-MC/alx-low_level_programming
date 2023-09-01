#include "main.h"

/**
 *_strlen - function name
 *@s: function paprameter
 *Return: lenght
 */

int _strlen(char *s)
{
	int len = 0; /* initialize lenght to 0 */

	while (*s != '\0')/* loop through characters s points to until u get to null*/
	{
		len++; /* increment the number of characters as we move */
		s++; /* increment s as it moves to next character */
	}
	return (len);
}
