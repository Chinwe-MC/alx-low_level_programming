#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added_node;
	char *dup_str;
	list_t *old_node;

	if (str == NULL)
	{
		return (NULL);
	}
	added_node = malloc(sizeof(list_t));
	if (added_node == NULL)
	{
		return (NULL);
	}
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(added_node);
		return (NULL);
	}
	added_node->str = dup_str;
	added_node->len = strlen(dup_str);
	added_node->next = NULL;
	if (*head == NULL)
	{
		*head = added_node;
	}
	else
	{
		old_node = *head;
	
		while (old_node->next != NULL)
		{
			old_node = old_node->next;
		}
		old_node->next = added_node;
	}
	return (added_node);
}

