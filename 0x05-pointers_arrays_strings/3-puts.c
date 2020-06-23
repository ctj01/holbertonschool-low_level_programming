#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - check the code for Holberton School students.
 *@str: is a parameter
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

}
