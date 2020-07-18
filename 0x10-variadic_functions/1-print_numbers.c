#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code for Holberton School students.
 *@n : number arguments
 *@separator : separator
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);

}
