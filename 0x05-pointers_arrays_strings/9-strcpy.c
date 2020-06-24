#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcpy - check the code for Holberton School students.
 *@src: is a parameter
 *@dest : is a parameter
 * Return: nothing.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
