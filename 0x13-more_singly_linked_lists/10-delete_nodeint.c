#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - function name
 *@head: parameter
 *@index: parameter
 *Return: 0 for success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *previous_node = NULL;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (temp != NULL && counter != index)
	{
		previous_node = temp;
		temp = temp->next;
		counter++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	previous_node->next = temp->next;
	free(temp);
	return (1);

}
