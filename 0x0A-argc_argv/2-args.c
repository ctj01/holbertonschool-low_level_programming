#include <stdio.h>
/**
 *main - check the code for Holberton School students.
 *@argc : is a parameter
 *@argv : is a pparameter
 * Return: nothing.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i  < argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
