#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 *@n: is a parameter
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i = 0;
	int e = 0;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				for (e = 0; e <= i - 2; e++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}

	} else
	{
		_putchar('\n');
	}
}
