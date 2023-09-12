#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *strtow - A function that splits string to words
 *@str: string argument
 *Return: char
 */
char **strtow(char *str)
{
	char **b;
	int i = 0;
	char *split;
	char *copy;

	int delimiter = 0;

	copy = malloc(strlen(str) + 1);
	if (copy == NULL)
		return (NULL);
	strcpy(copy, str);
	split = strtok(copy, " ");
	while (split != NULL)
	{
		delimiter++;
		split = strtok(NULL, " ");
	}
	b = malloc((delimiter + 1) * sizeof(char *));
	if (b == NULL)
		return (NULL);
	strcpy(copy, str);
	split = strtok(copy, " ");
	while (split != NULL)
	{
		b[i] = strdup(split);
		i++;
		split = strtok(NULL, " ");
	}
		b[i] = NULL;
	free(copy);
	return (b);
}
