#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - check the code for Holberton School students.
 *@argc : is a parameter
 *@argv : is a pparameter
 * Return: nothing.
 */

int main(int argc, char *argv[])
{
	int aux = 0;
	int i = 0;
	int d = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; ++i)
	{
		for (d = 0; argv[i][d]; d++)
		{
			if (isalpha(argv[i][d]))
			{
				printf("Error\n");
				return (1);
			}

		}
		aux += atoi(argv[d]);
	}

	printf("%i\n", aux);
	return (0);
}
