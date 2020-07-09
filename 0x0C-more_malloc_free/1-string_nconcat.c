#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen_recursion - check the code for Holberton School students.
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
 * string_nconcat - check the code for Holberton School students.
 *@s1 : is a parameter
 *@s2 : is a parameter
 *@n : is a parameter
 * Return: nothing.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int d = 0, d2 = 0, i = 0, z = 0;
	char *pointer = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	d = _strlen_recursion(s1);
	d2  = _strlen_recursion(s2);

	if (n >= d2)
	{
		pointer = malloc(sizeof(*pointer) * (d + d2 + 1));
	}
	else
	{
		pointer = malloc(sizeof(*pointer) * (d + n + 1));
	}

	if (pointer)
	{
		for (i = 0; s1[i]; i++)
			pointer[i] = s1[i];

		for (z = 0; s2[z] && z < n; z++)
			pointer[i++] = s2[z];
	}
	pointer[i] = '\0';
	return (pointer);
}
