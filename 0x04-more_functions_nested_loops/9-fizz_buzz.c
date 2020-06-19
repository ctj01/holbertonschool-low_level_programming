#include "holberton.h"
#include <stdio.h>
/**
 *main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz");
			printf(" ");
		}
		else if (((i % 5) == 0) && ((i % 3) != 0))
		{
			printf("Buzz");
			printf(" ");
		}
		else if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
		}
		if (!(i == 100))
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
