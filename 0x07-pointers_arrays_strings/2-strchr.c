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
	int status = 0;

	while (s[i] != '\0')
	{

		if (s[i] == c)
		{
			status = 1;
			return (s + i);
		}
		i++;

	}

	if (status == 1)

		return (s + i);


	return (0);

}
