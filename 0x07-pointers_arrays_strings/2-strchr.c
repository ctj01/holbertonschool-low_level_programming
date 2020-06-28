#include "holberton.h"
/**
 *_strchr - check the code for Holberton School students.
 *@s : is a parameter
 *@c : is a parameter
 * Return: nothing.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{

		if (s[i] == c)
		{
			return (s + i);
		}
		i++;

	}

	if (s[i] == c)

		return (s + i);


	return (0);

}
