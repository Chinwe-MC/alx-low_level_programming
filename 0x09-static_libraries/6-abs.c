#include "main.h"





/**
 * _abs - Checks the absolute number
 *
 * @c: function parameter int
 *
 * Return: Always 0
*/

int _abs(int c)
{
	if (c < 0)
	{
	int value;

	value = c * -1;
	return (value);
	}
	return (c);

}
