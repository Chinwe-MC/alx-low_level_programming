#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *sum_listint - function to return sum of data in linked list
 *@head: parameter
 *Return: total sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total = head->n;
		head = head->next;
	}
	return (total);
}
