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

	for (i = 0; i < 10;)
	{
		putchar('0' + i);
		putchar(',' + ' ');
		i++;
	} 
	return (0);

}