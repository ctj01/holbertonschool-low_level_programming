#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - check the code for Holberton School students.
 *@c : is a parameter
 *@size : is a parameter
 * Return: nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;

	if (size == 0)
	{
		return  (arr);
	}

	arr =  (char *)malloc(size);

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
