#include "holberton.h"
#include <stdio.h>
/**
 *_strstr - check the code for Holberton School students.
 *@haystack : is a parameter
 *@needle : is a parameter
 * Return: nothing.
 */


char *_strstr(char *haystack, char *needle)
{
	char *d = NULL;

	while (*needle)
	{

		while (*haystack)
		{
			if (*haystack == *needle)
			{
				d = haystack;
				break;

			}

			haystack++;
		}
		if (d != NULL)
		{
			return (d);
		}
		needle++;

	}
	return (NULL);

}
