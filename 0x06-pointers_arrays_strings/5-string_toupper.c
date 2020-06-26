#include "holberton.h"
/**
 *string_toupper - check the code for Holberton School students.
 *@a: is a parameter
 * Return: nothing.
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;


		}
		i++;


	}
	return (a);


}
