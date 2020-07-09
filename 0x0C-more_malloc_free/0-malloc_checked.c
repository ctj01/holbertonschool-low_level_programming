#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *malloc_checked - check the code for Holberton School students.
 *@b : is a parameter
 * Return: nothing.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
