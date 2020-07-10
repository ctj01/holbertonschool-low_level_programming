#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _realloc - check the code for Holberton School students.
 *@ptr : is a parameter
 *@old_size : is a paramerter
 *@new_size: is a parameter
 * Return: nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
