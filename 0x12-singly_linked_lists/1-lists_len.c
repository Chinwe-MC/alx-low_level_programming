#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */


size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while(h != NULL)
	{
		counter++;
	}
	return (counter);
}
