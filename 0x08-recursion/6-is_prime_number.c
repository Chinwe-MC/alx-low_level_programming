#include "main.h"
#include <math.h>

/**
 *is_prime_number - function name
 *@n: argument
 *@i: argument
 *Return: int
 */

int actual_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);

	}
	return (actual_prime(n, n - 1));
}

/**
 *actual_prime - function name
 *@n: argument
 *@i: argument
 *Return: int
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
