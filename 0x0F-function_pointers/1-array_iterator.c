#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - check the code for Holberton School students.
 *@array : array
 *@action : function pointer
 *@size : size of array
 * Return: NOTHING.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
