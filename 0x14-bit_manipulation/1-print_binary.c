#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: input integer
 */
void print_binary(unsigned long int n)
{
	_Bool print = false;
	unsigned long int j;

	register short bits = sizeof(n) * BIT - 1;

	if (!n)
	{
		_putchar('0');
		return;
	}
	for (; bits >= 0; bits--)
	{
		j = n >> bits;
		if (j & 1)
		{
			print = true;
			_putchar('1');
		}
		else if (print)
			_putchar('0');
	}
}
