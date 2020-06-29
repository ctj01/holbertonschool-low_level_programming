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
	char *d;

	while (*needle != '\0')
	{

		while (*haystack != '\0')
		{
			if (*haystack == *needle)
			{
				d = needle;

			}
			haystack++;
		}
		if (*needle)
		{
			return (d);
		}
		else
		{
			return (NULL);
		}

		needle++;

	}
	return (NULL);

}
