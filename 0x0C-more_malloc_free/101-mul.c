#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *mul - A program that multiples numbers
 *@num1: argument
 *@num2: argument
 *Return: int
 */

int mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 *main - Entry point
 *@argc: argument
 *@argv: argument
 *Return: integer
 */
int main(int argc, char *argv[])
{
	int result;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!isdigit(*argv[1]) || !isdigit(*argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = mul(num1, num2);
	}
	printf("%d\n", result);
	return (result);
}

