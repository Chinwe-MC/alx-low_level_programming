#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *argstostr - function to concatenate arguments
 *@ac: function parameter
 *@av: argument
 *Return: Always 0
 */

char *argstostr(int ac, char **av)
{
	int i;
	int total_len;
	char *concat;
	int position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	concat = (char *)malloc(total_len + 1 * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(concat + position, av[i]);
		position += strlen(av[i]);
		concat[position++] = '\n';
	}
	concat[position] = '\0';
	return (concat);
}


