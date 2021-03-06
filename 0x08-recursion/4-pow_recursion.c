#include "holberton.h"
#include <stdio.h>
/**
 * _pow_recursion - check the code for Holberton School students.
 *@x : is a parameter
 *@y : is a parameter
 * Return: nothing.
 */

int _pow_recursion(int x, int y)
{
	int poww = 0;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		poww = 1;
	}
	else
	{
		poww = (x * _pow_recursion(x, y - 1));

	}
	return (poww);

}
