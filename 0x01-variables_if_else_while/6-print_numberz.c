#include <stdio.h>
#include <ctype.h>

/**
 *main - Print digitt 1 - 0 using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		
		putchar('o' + i); 
	}
	putchar('\n');
	return (0);
}
