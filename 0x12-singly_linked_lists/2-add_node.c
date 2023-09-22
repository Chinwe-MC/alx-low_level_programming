#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 *
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *added_node;
	char *dup_str;

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
		free (added_node);
		return (NULL);
	}
	added_node->len = strlen(dup_str);
	added_node->str = dup_str;
	added_node->next = *head;
	*head = added_node;
	return (added_node);
}
