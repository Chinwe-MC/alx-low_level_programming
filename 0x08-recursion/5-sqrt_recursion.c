#include "main.h"
#include <math.h>

/**
 *_sqrt_recursion - function name
 *@n: parameter
 *@i: parameter
 *Return: int
 */

int actual_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));

}
/**
 *actual_sqrt_recursion - function name
 *@i: parameter
 *@n: paramneter
 *Return: int*
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}

