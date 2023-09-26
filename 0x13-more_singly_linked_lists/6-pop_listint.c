#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 *pop_listint - function to free head of a linked list
 *@head: parameter
 *Return: int
 */


int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
