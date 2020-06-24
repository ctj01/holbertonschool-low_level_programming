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
	int d = 0;

	while (str[i])
	{
		i++;
		if (i % 2 == 0)
			d = i / 2;
		else
			d = (i + 1) / 2;
	}

	while (str[d])
	{
		_putchar(str[d]);

		d++;
	}

	_putchar('\n');


}
