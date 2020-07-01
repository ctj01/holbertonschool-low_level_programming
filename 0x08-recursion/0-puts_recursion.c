#include "holberton.h"
#include <stdio.h>
/**
 *_puts_recursion - check the code for Holberton School students.
 *@s : is a parameter
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	_putchar('\n');
}
