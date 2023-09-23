#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *free_list - function name
 *@head: parameter
 *Return: void
 */

void free_list(list_t *head)
{
	list_t *node = head;
	list_t *next;

	while (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
