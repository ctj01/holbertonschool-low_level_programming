#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code for Holberton School students.
 *@s: is a parameter
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i - 1]);
		i--;

	}
	_putchar('\n');

}
