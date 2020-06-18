#include "holberton.h"
/**
 *more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i = 0;
	int n = 0;

	while (i < 11)
	{
		while (n < 15)
		{
			_putchar(n + '0');
			n++;
		}
		n = 0;
		i++;
	}
	_putchar('\n');
}
