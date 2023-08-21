#include "main.h"


/**
 *swap_int - function name( swappint values of a variable using pointers)
 *@a: function parameter
 *@b: function parameter
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int t = *a; /* variable t will hold the value in pointer a */

	*a = *b;
	*b = t;
}
