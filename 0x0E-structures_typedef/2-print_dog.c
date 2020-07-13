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
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
				printf("Name is: %s\n", d->name);
		if (d->age)
		{
			printf("Age: %f\n", d->age);
		}
		else
			printf("Age: (nil)\n");
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
			printf("Owner: %s\n", d->owner);
	}

}
