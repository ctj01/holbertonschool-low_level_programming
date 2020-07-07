#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *_strlen_recursion - check the code for Holberton School students.
 *@s : is a parameter
 * Return: nothing.
 */

int _strlen_recursion(char *s)
{
	int z = 0;

	if (*s != '\0')
	{
		z =  _strlen_recursion(++s);
		z++;
	}
	return (z);

}

/**
 *str_concat - check the code for Holberton School students.
 *@s1 : is a parameter
 *@s2 :is a parameter
 * Return: nothing.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, d = 0, z = 0, p = 0;
	char *st = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	d = _strlen_recursion(s1);
	i = _strlen_recursion(s2);

	st = (char *)malloc(d + i);
	if (st != NULL)
	{
		z = 0;
		for (z = 0; z <  d; z++)
		{
			st[z] = s1[z];

		}
		for (p = 0; p <  i; p++)
		{
			st[z] = s2[p];
			z++;

		}
	}
	return (st);
}
