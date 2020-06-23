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
	int len = strlen(str);

	for (int i = 0; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
