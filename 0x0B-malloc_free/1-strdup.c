#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *_strlen_recursion - check the code for Holberton School students.
 *@s : is a parameter
 * Return: nothing.
 */

int _strlen_recursion(char *s)
{
	int z = 0;

	if (*s != '\0')
	{
		z =  _strlen_recursion(++s);
		z++;
	}
	return (z);

}

/**
 *_strdup - check the code for Holberton School students.
 *@str : is a parameter
 * Return: nothing.
 */

char *_strdup(char *str)
{
	int i = 0;
	int d = 0;
	char *dup = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	i = _strlen_recursion(str);
	dup = (char *)malloc(i * sizeof(char)+ 1);
	for (d = 0; d < i; d++)
	{
		dup[d] = str[d];
	}
	dup[d] = '\0';
	return (dup);

}
