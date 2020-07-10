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

	if (min > max)
	{
		return (pointer);
	}
	pointer = malloc(sizeof(int) * (min + max));

	if (pointer)

		for (i = 0; i < (min + max); i++)
		{
			pointer[i] = i;
		}

	return (pointer);
}
