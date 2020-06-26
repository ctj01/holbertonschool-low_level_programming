#include "holberton.h"
/**
 *leet - check the code for Holberton School students.
 *@s: is a parameter
 * Return: nothing.
 */

char *leet(char *s)
{
	int i = 0;
	int d = 0;
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacers[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (d = 0; replacers[d]; d++)
		{
			if (s[i] == letter[d])
			{
				s[i] = replacers[d / 2];
			}
		}

	}

	return (s);
}
