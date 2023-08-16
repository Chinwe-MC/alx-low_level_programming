#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 for success
 */

int main(void)
{
	int f[50];

	f[0] = 1;
	f[1] = 2;
	int i;

	for (i = 2; i < 50; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	for (i = 0; i < 50; i++)
	{
		printf("%d", f[i]);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
