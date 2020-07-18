#include <stdio.h>
#include "variadic_functions.h"

/**
 *  print_strings - check the code for Holberton School students.
 *@n : number arguments
 *@separator : separator
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	char *string;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);

		if (string)
		{
			printf("%s", string);
		}
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);

}
