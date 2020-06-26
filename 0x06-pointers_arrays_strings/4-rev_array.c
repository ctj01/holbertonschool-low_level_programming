#include "holberton.h"
/**
 *reverse_array - check the code for Holberton School students.
 *@a: is a parameter
 *@n : is a parameter
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int z = 0;

	n = n - 1;
	while (i < n)
	{
	z = a[i];
	a[i] = a[n];
	a[n] = z;
	i++;
	n--;

	}

}
