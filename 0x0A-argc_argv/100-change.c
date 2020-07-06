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
	int aux = 0, d = 0, i = 0;
	int money[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	d = atoi(argv[1]);
	if (d <= 0)
		printf("0\n");
	for (i = 0; i < 5; ++i)
	{
		if (d / money[i] > 0)
		{
			aux += d / money[i];
			if ((d % money[i]) == 0)
			{
				printf("%d\n", aux);
				return (0);
			}
			else
				d = d % money[i];
		}
	}
	return (0);
}
