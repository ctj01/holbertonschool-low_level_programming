#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check the code for Holberton School students.
 *@array : array
 *@cmp : function pointer
 *@size : size of array
 * Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size > 0)
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
