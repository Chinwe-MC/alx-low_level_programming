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

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
