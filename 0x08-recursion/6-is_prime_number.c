#include "holberton.h"
#include <stdio.h>
/**
 *isPrime - check the code for Holberton School students.
 *@n : is a parameter
 *@i : is a parameter
 * Return: nothing.
 */
int isPrime(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (isPrime(n, i + 1));
}

/**
 *is_prime_number - check the code for Holberton School students.
 *@n : is a parameter
 * Return: nothing.
 */

int is_prime_number(int n)
{
	int number = 0;

	number = isPrime(n, 2);

	return (number);
}
