#include "holberton.h"
#include <stdio.h>
/**
 *_print_rev_recursion - check the code for Holberton School students.
 *@s : is a parameter
 * Return: nothing.
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
