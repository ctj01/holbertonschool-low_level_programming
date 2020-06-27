#include "holberton.h"
/**
 *rot13 - check the code for Holberton School students.
 *@s: is a parameter
 * Return: nothing.
 */

char *rot13(char *s)
{
	int i = 0;
	int d = 0;
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lower[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s && s[i]; ++i)
	{
		for (d = 0 ; d <= 52; d++)
		{
			if (s[i] == upper[d])
			{
				s[i] = lower[d];
				break;

			}
		}
	}

	return (s);
}
