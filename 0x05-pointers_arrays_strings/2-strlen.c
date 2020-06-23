#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *_strlen - check the code for Holberton School students.
 *@s: is a parameter
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i=0;

	while (s[i])
	{
		i++;
	}
	return (i);

}
