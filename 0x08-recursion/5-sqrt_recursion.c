#include "holberton.h"
#include <stdio.h>
/**
 *findsqrt - check the code for Holberton School students.
 *@n : is a parameter
 *@i : is a parameter
 * Return: nothing.
 */
int findsqrt(int i, int n)
{
	if ((i * i) == n)
	{
		return (i);
	}
	if (i > n)
	{
		return (-1);
	}

	return (findsqrt(i + 1, n));
}

/**
 * _sqrt_recursion - check the code for Holberton School students.
 *@n : is a parameter
 * Return: nothing.
 */

int _sqrt_recursion(int n)
{
	int sqrtt = 0;

	sqrtt = findsqrt(1, n);
	return (sqrtt);
}
