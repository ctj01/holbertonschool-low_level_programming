#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 *@s : is a parameter
 *@accept : is a parameter
 * Return: nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int d = 0;
	int aux = 0;
	unsigned int x = 0;

	while (accept[i])
	{
		i++;
	}
	aux = i;
	i = 0;
	for (; i <= aux; i++)
	{
		for (d = 0; d <= aux; d++)
		{
			if (accept[i] == s[d])
			{
				x = x + 1;
			}

		}
	}

	return (x);
}
