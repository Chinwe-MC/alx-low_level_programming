#include <stdio.h>
#include "lists.h"

/**
 *print_list- function name
 *@h: pointer
 *Return: Always 0
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[5] %s\n", h->str);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
