#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code for Holberton School students.
 *@s: is a parameter
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0;
	int d = 0;
	char aux[100];

	while (s[i])
	{
		aux[i] = s[i];
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		s[i] = aux[d];
		d++;
		i--;

	}
}
