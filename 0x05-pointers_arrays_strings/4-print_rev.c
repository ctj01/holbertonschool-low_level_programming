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
	int len = strlen(s);

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');

}
