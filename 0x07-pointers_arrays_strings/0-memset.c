#include "holberton.h"
/**
 *_memset - check the code for Holberton School students.
 *@b : is a parameter
 *@s : is a parameter
 *@n : is parameters
 * Return: nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{

	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
