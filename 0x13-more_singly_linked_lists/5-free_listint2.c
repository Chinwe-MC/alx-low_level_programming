#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - function to free a linked list
 *@head: parameter
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *present_node = *head;
	listint_t *temp;

	while (present_node != NULL)
	{
		temp = present_node;
		present_node = present_node->next;
		free(temp);
	}
	*head = NULL;
}

