#include <stdio.h>
#include <ctype.h>

/**
 * main - print all possible combination of single digit, comma seperated
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i == 9)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar(' ');
	return (0);

}
