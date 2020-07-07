#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *create_array - check the code for Holberton School students.
 *@c : is a parameter
 *@size : is a parameter
 * Return: nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	arr = (char *)malloc(size * sizeof(char));
	if (size != 0 && arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
	return (arr);

}
