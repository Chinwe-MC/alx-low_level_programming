#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
*/


int main(void)
{
	int num;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 || i % 5 == 0)
		{
			num = num + i;
		}
	}
	printf("%d\n", num);
	return (0);
}
