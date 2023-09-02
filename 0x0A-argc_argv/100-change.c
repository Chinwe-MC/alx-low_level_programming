#include <stdio.h>
#include <stdlib.h>

/**
 *main -entry point
 *@argv: argument
 *@argc: argument
 *Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			count++;
		num -= coins[i];
		}
	}
	printf("%d\n", count);
	return (0);
}
