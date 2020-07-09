#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - check the code for Holberton School students.
 *@size : is a parameter
 *@nmemb : is a paramerter
 * Return: nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer = NULL;
	unsigned int i = 0, d = 0;

	if (nmemb == 0 || size == 0)
	{
		return (pointer);

	}
	d = (size * nmemb);
	pointer = malloc(d);
	if (pointer)
	{
		for (i = 0; i < d; i++)
		{
			((char *)pointer)[i] = 0;
		}
	}

	return (pointer);
}
