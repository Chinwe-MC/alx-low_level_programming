#include "main.h"

/**
 * print_last_digit - function that prints the lasts digit
 *
 * @i: function parameter int i
 *
 *Return: returns the last digit
*/

int print_last_digit(int i)
{

		int last_digit;

		last_digit = i % 10;
		if (last_digit < 0)
		{
			last_digit = last_digit * -1;
		}
		_putchar(last_digit + '0');
		return (last_digit);


}

