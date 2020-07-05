#include <stdio.h>
#include <stdlib.h>
/**
 *main - check the code for Holberton School students.
 *@argc : is a parameter
 *@argv : is a pparameter
 * Return: nothing.
 */

int main(int argc, char *argv[])
{
	int aux;

	if (argc > 0 && argc <= 3)
	{
		aux = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", aux);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
