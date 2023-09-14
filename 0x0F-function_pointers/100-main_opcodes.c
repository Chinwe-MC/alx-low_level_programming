#include <stdio.h>
#include <stdlib.h>

/**
 *opcodes - function name
 *@a: function parameter
 *@x: function parameter
 *Return: void
 */

void opcodes(char *a, int x)
{
	int n = 0;

	for (n = 0; n < x; n++)
	{
	printf("%.2hhx", a[n]);
	if (n < x - 1)

		printf(" ");
	}
	printf("\n");
}
/**
 *main - Entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes((char *)&main, j);
	return (0);
}
