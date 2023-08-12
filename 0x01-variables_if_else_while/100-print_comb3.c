#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	int i;
	int j; 

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <9; j++)

		{
			if(i == j)
			{
				continue;
			}
			putchar('0' + i);
			putchar('0' + j);
			putchar(' ');
		}
	}
	
	return (0);
}
