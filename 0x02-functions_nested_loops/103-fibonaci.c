#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */

int main(void)
{
	int end = 4000000;
	int f[2] = {1, 2};
	int Sum = 0;

	while (f[1] <= end)
	{
		if (f[1] % 2 == 0)
		{
			Sum += f[1];
		}
		int Fib = f[0] + f[1];

		f[0] = f[1];
		f[1] = Fib;
	}
	printf("%d\n", Sum);
	return (0);
}

