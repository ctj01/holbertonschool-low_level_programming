#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 *print_array - check the code for Holberton School students.
 *@a: is a parameter
 *@n : is a parameter
 * Return: nothing.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");

}
