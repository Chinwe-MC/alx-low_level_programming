#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *init_dog - initialise a variable of type struct dog
 *@d: pointer to struct
 *@name: pointer to dog name
 *@age: pointer to dog age
 *@owner: pointer to dogs owner
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
