#include "holberton.h"
/**
 *_strncat - check the code for Holberton School students.
 *@dest: is a parameter
 *@src : is a parameter
 *@n : is a parameter
 * Return: nothing.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int d = 0;

	while (dest[d] || dest[d] != '\0')
	{

		d++;

	}
	while (src[i] && i < n)
	{

		dest[d] = src[i];
		i++;
		d++;

	}

	dest[d] = '\0';

	return (dest);

}
