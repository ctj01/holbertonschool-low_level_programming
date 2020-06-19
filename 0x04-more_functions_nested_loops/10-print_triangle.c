#include "holberton.h"

/**
 * print_triangle - Entry point
 * @size: Entry variabale
 */

void print_triangle(int size)
{
	int i, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (d = 1; d <= size; d++)
			{
				if (d != size && d <= size - i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
