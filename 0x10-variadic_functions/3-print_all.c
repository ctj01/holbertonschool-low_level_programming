#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * printf_float - check the code for Holberton School students.
 *@list : number argument
 * Return: void.
 */

void printf_float(va_list list)
{
	printf("%f", va_arg(list, double));

}
/**
 * printf_int - check the code for Holberton School students.
 *@list : number argument
 * Return: void.
 */
void printf_int(va_list list)
{
	printf("%i", va_arg(list, int));

}
/**
 *printfcharacter - check the code for Holberton School students.
 *@list : number argument
 * Return: void.
 */

void printfcharacter(va_list list)
{
	printf("%c", va_arg(list, int));

}

/**
 *printfchar - check the code for Holberton School students.
 *@list : number argument
 * Return: void.
 */

void printfchar(va_list list)
{
	char *string = va_arg(list, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);

}

/**
 * print_all - check the code for Holberton School students.
 *@format : placeholderlist
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, d;
	va_list list;


	i = 0;
	d = 0;
	_printf print[] = {
		{"c", printfcharacter},
		{"s", printfchar},
		{"i", printf_int},
		{"f", printf_float},
		{NULL, NULL}
	};
	va_start(list, format);

	while (format[i])
	{
		while (print[d].c != NULL)
		{
			if (*print[d].c == format[i])
			{
				print[d].placeholder(list);
				if (d - 1)
					printf(", ");

			}
			d++;
		}
		d = 0;
		i++;
	}
	va_end(list);
	printf("\n");
}
