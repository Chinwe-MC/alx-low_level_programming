#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - function name
 *@head: parameter
 *@idx: parameter
 *@n: parameter
 *Return: new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *present_node;
	unsigned int counter;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	present_node = *head;
	while (present_node != NULL && counter < idx - 1)
	{
		present_node = present_node->next;
		counter++;
	}
	if (present_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = present_node->next;
	present_node->next = new_node;
	return (new_node);
}

