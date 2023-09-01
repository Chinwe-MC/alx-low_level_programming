#include "main.h"
#include <ctype.h>

/**
 * _islower - A function that checks for aplhabeths
 *
 * @c:  function paramter int c
 *
 * Return: 1 if alphabeth else Return 0
*/


int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
