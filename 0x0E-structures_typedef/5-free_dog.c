#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function
 * @d: pointer type
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
