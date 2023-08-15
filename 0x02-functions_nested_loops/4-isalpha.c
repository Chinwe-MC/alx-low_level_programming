#include "main.h"
#include <ctype.h>
/**
 * _isalpha - A function that checks for aplhabeths
 *
 * Return: 1 if alphabeth else Return 0
*/


int _isalpha(int c)
{

	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
