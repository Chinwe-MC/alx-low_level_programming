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
	int cents;
	int num_cents;
	int cents_value;
	int i;
	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_cents = sizeof(coins) / sizeof(coins[0]);
	for (i = 0; i < num_cents; i++)
	{
		cents_value = coins[i];
		while (cents >= cents_value)
		{
			count++;
		cents -= cents_value
		}
	}
	printf("%d\n", count);
	return (0);
}
