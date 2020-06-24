#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2 - check the code for Holberton School students.
 *@str: is a parameter
 * Return: nothing.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');


}
