#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 *main - entry point
 *@argc: parameter
 *@argv: argument
 *Return: 0 Success, 1 (Error)
 */

int main(int argc, char *argv[])
{

	int result, i, j;

	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *a = argv[i];

		for (j = 0; a[j] != '\0'; j++)
		{
			if (!isdigit(a[j]))
			{
			printf("Error\n");
			return (1);
			}
		}
		result = atoi(a);
		add = add + result;
	}
	printf("%d\n", add);
	return (0);
}


