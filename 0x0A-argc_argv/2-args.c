#include <stdio.h>
#include <string.h>

/**
 *main - Entry poin
 *@argc: argument
 *@argv: argument
 *Return: 0 Success
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
