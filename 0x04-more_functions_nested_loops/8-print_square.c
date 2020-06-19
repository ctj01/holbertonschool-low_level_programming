#include "holberton.h"
/**
 *print_square - check the code for Holberton School students.
 *@size: is a parameter
 * Return: Always 0.
 */

void print_square(int size)
{
	int i = 0;
	int e = 0;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			while (e < size)
			{
			_putchar('#');
			e++;
			}
			_putchar('\n');
			e = 0;
		}

	} else
	{
		_putchar('\n');
	}
}
