#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - function to add node to end of list
 *@head: parameter
 *@n: parameter
 *Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *present_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		present_node = *head;
		while (present_node->next != NULL)
		{
			present_node = present_node->next;
		}
		present_node->next = new_node;
	}
	return (new_node);
}
