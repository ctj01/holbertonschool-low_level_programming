#include "holberton.h"
/**
 *_memcpy - check the code for Holberton School students.
 *@dest : is a parameter
 *@src : is a parameter
 *@n : is parameters
 * Return: nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	int d = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[d];
		d++;

	}

	return (dest);

}
