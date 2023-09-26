#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - function name
 *@head: parameter
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *present_node = head;
	listint_t *temp;

	while (present_node != NULL)
	{
		temp = present_node;
		present_node = present_node->next;
		free(temp);
	}
}

