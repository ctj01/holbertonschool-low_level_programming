#include "holberton.h"
#include <stdio.h>
/**
 *factorial - check the code for Holberton School students.
 *@n : is a parameter
 * Return: nothing.
 */

int factorial(int n)
{
	int Factorial = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		Factorial = 1;
	}
	else
	{
		Factorial = n * factorial(n - 1);
	}
	return (Factorial);
}
