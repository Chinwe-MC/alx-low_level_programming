#include "dog.h"
#include <stdio.h>

/**
 *print_dog - function that prints struct dog
 *@d:pointer to struct dog
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name:(nil)\n");
		}
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
		{
			printf("owner: %s\n", d->owner);
		}
		else
		{
			printf("owner: (nil)\n");
		}
	}
}