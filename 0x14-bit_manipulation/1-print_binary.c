#include <stdio.h>
#include "main.h"

/**
 *_pow: fucntion name
 *@b: function parameter
 *p: function parameter
 *Return:unsigned int
 */
unsigned long int _pow(unsigned int b, unsigned int p)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= p; i++)
	{
		num *=b;
	}
	return (num);
}
void print_binary(unsigned long int n)
{
	unsigned long int divider, check;
	char flag;

	flag = 0;
	divider = _pow( 2, sizeof(unsigned long int) * 8 - 1);
	while (divider != 0)
	{
		check = n & divider;
		if (check == divider)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divider == 1)
		{
			_putchar('0');
		}
		divider >>= 1;
	}
}
