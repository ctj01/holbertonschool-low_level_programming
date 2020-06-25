#include "holberton.h"
/**
 *_strcmp - check the code for Holberton School students.
 *@s1: is a parameter
 *@s2 : is a parameter
 * Return: nothing.
 */

int _strcmp(char *s1, char *s2)
{

	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{

		if (s1[i] < s2[i])
		{
			return (-15);

		} else if (s1[i] == s2[i])
		{

			return (0);

		} else
		{

			return (15);
		}
		i++;

}
