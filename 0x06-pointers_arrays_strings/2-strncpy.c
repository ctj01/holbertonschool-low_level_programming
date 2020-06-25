#include "holberton.h"
/**
 *_strncpy - check the code for Holberton School students.
 *@src: is a parameter
 *@dest : is a parameter
 *@n : is a parameter
 * Return: nothing.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
