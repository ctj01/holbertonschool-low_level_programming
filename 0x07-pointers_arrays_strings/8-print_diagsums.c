#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 *@a : is a parameter
 *@size : is a parameter
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int d = 0;
	int z = 0;
	int p = 0;
	int x = 0;

	while (i < size)
	{
		while (d < size)
		{
			z = a[(d + (size * i))];

			if (i == d)
			{
				p = p + z;

			}

			if ((i + d) == (size - 1))
			{
				x = x + z;


			}
			++d;
		}
		d = 0;
		++i;
}

	printf("%i, %i\n", p, x);

}
