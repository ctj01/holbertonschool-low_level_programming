#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - check the code for Holberton School students.
 *@name : name
 *@f : function pointer
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
