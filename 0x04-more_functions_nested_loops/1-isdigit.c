#include "holberton.h"
/**
 *_isdigit - check the code for Holberton School students.
 *@c: is a parameter
 * Return: Always 0.
 */

int _isdigit(int c)
{
	int i;

	if (c >= 48 && c < 58)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
