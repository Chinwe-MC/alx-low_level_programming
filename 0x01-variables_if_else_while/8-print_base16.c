#include <stdio.h>
#include <ctype.h>

/**
 * main - print all base 16 numbers in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	int i;
	char letters;

	for (i =0; i <10; i++)
	{
		putchar('0' + i);
	}
	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}
		putchar('\n');
		return (0);

}
