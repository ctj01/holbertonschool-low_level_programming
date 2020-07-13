#include "dog.h"
#include <stdio.h>
/**
 * print_dog - check the code for Holberton School students.
 * @d : pointer struct
 *
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else if (d->age == 0)
		{
			printf("Age: (nil)\n");
		}
		else if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		printf("Name is: %s\n", d->name);
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
	}

}
