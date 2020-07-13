#include "dog.h"
#include <stdio.h>
/**
 * init_dog - check the code for Holberton School students.
 * @d : pointer struct
 * @name: name of the dog
 * @age: dog's age
 * @owner: the owner
 *
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name,
		d->age = age,
		d->owner = owner;

}
