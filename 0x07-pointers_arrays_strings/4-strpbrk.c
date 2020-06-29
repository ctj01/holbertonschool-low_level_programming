#include "holberton.h"
/**
 * _strpbrk - check the code for Holberton School students.
 *@s : is a parameter
 *@accept : is a parameter
 * Return: nothing.
 */


char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int d = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (accept[d] == s[i])
			{

				return (s + i);
			}

		}


	}
	if (accept[d] == s[i])
	{

		return (s + i);
	}
	return (0);
}
