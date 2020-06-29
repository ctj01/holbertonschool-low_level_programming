#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 *@s : is a parameter
 *@accept : is a parameter
 * Return: nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int d = 0;
	unsigned int aux = 0;
	unsigned int x = 0;

	while (accept[i] != '\0')
	{
		i++;
	}
	aux = i;
	i = 0;
	for (; i <= aux; i++)
	{
		for (d = 0; d <= aux; d++)
		{
			if (accept[i] == s[d] && accept[i] != '\0' && s[d] != '\0')
			{
				x++;
			}

		}
	}

	return (x);
}
