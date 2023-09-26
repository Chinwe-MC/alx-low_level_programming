#include <stdio.h>
#include "lists.h"

/**
 *listint_len - return num of elements in a linked list
 *@h: parameter name for the head of the linked list
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
