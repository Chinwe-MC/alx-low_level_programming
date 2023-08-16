#include "main.h"

/**
 *times_table - function to print 9 times table
 *
 *Return: void
 *
 */


void times_table(void)
{
	int j, k, n, i, m;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			n = j * k;
			if (n > 9)
			{
				i = n % 10;
				m = (n - i) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(m + '0');
				_putchar(i + '0');
			}
			else
			{
				if (k != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}

