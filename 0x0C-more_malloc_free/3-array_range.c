#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - check the code for Holberton School students.
 *@min : is a parameter
 *@max : is a paramerter
 * Return: nothing.
 */

int *array_range(int min, int max)
{
	int *pointer  = NULL;
	int i = 0;
	int d = 0;

	if (min > max)
	{
		return (pointer);
	}
	d = max - min  + 1;
	pointer = malloc(sizeof(int) * d);

	if (pointer)
	{
		for (i = 0; i < d; i++)
		{
			pointer[i] = i;
		}
	}
	else
	{
		free(pointer);
		return (NULL);
	}

	return (pointer);
}
