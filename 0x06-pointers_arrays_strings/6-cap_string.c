#include "holberton.h"
/**
 *cap_string - check the code for Holberton School students.
 *@s: is a parameter
 * Return: nothing.
 */

char *cap_string(char s)
{
	int i, d;
	int upper = 32;
	int special[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - upper;
		}

		upper = 0;

		for (d = 0; d <= 12; d++)
		{
			if (s[i] == special[d])
			{
				d = 12;
				upper = 32;
			}
		}
	}
	return (s);


}
