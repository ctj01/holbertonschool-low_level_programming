#ifndef _VARIADIC_FUNC_H
#define _VARIADIC_FUNC_H
#include <stdarg.h>

/**
 * struct _print - print type with corresponding print function
 * @c: print placeholder
 * @placeholder: print function
 */

typedef struct _print
{
	char *c;
	void(*placeholder)(va_list);
}_printf;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
