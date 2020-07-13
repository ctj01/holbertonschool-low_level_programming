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
		else
				printf("Name is: %s\n", d->name);
		if (d->age == 0)
		{
			printf("Age: (nil)\n");
		}
		else
			printf("age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		printf("owner: %s\n", d->owner);
	}

}
