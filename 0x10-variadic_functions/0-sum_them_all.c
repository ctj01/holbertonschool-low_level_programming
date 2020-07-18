#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 *@n : number arguments
 *
 *Description: variadic functions
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);


}
