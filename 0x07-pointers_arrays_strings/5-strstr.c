#include "holberton.h"
/**
 *_strstr - check the code for Holberton School students.
 *@haystack : is a parameter
 *@needle : is a parameter
 * Return: nothing.
 */


char *_strstr(char *haystack, char *needle)
{


	while (*needle != '\0')
	{

		while (*haystack != '\0')
		{
			if (*haystack == *needle)
			{
				break;

			}
			haystack++;
		}
		if (*needle)
		{
			return (haystack);
		}

			needle++;
	}

	return (0);
}
