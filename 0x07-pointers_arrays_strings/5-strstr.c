#include "holberton.h"
/**
 *_strstr - check the code for Holberton School students.
 *@haystack : is a parameter
 *@needle : is a parameter
 * Return: nothing.
 */


char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int d = 0;

	while (needle[i] != '\0')
	{

		while (haystack[d] != '\0')
		{
			if (haystack[d] == needle[i])
			{
				break;
			}
			d++;
		}

		if (needle[i])
		{
			return (haystack + d);
		}

		i++;
	}
		return (0);
}
