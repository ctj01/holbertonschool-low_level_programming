#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - check the code for Holberton School students.
 *@a: is a parameter
 *@b: is a parameter
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;

}
