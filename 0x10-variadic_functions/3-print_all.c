#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_float - check the code for Holberton School students.
 *@f : number argument
 * Return: void.
 */

void printf_float(va_list f)
{
	printf("%f", va_arg(f, double));

}
/**
 * printf_int - check the code for Holberton School students.
 *@i : number argument
 * Return: void.
 */
void printf_int(va_list i)
{
	printf("%i", va_arg(i, int));

}
/**
 *printfcharacter - check the code for Holberton School students.
 *@c : number argument
 * Return: void.
 */

void printfcharacter(va_list c)
{
	printf("%c", va_arg(c, int));

}

/**
 *printfchar - check the code for Holberton School students.
 *@s : number argument
 * Return: void.
 */

void printfchar(va_list s)
{
	char *string = va_arg(s, char *);

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


	_printf print[] = {
		{"c", printfcharacter},
		{"s", printfchar},
		{"i", printf_int},
		{"f", printf_float},
		{NULL, NULL}
	};
	char *separator = "";

	va_start(list, format);

	i = 0;
	d = 0;

	while (format[i])
	{
		while (print[d].c != NULL)
		{
			if (*print[d].c == format[i])
			{
				printf("%s", separator);
				print[d].placeholder(list);
				separator = ", ";


			}
			d++;
		}
		d = 0;
		i++;
	}
	va_end(list);
	printf("\n");
}
