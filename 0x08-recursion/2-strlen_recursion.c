#include "holberton.h"
#include <stdio.h>
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
