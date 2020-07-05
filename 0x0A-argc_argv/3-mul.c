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


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	aux = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", aux);
	return (0);
}
