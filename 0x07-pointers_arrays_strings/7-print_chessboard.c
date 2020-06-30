#include "holberton.h"
#include <stdio.h>
/**
 *  print_chessboard - check the code for Holberton School students.
 *@a : is a parameter
 * Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int d = 0;

	while (i < 8)
	{
		while (d < 8)
		{
			_putchar(a[i][d]);
			++d;
		}
		d = 0;
		_putchar('\n');
		++i;
	}

}
