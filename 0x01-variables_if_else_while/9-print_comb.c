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
	int j = 9;

	for (i = 0; i < 9;)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
		i++;
	
	}
	putchar('0' + j); 
	return (0);

}
