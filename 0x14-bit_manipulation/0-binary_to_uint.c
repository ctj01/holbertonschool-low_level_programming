#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input string
 * Return: unsigned decimal conversion of input is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (!b)
		return (r);
	while (*b)
	{
		if (!isBinary(*b))
			return (0);
		r = (r * 2) + (*b++ - '0');
	}
	return (r);
}

/**
 * isBinary - checks if char is valid binary
 * @c: input char
 * Return: true or false
 */
_Bool isBinary(char c)
{
	return (c == '1' || c == '0');
}
