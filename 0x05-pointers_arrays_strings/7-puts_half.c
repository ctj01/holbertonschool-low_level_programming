#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - check the code for Holberton School students.
 *@str: is a parameter
 * Return: nothing.
 */

void puts_half(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		i++;
	}

	i = i / 2;
	while (*(str + i))
	{
		_putchar(str[i]);

		i++;
	}

	_putchar('\n');


}
