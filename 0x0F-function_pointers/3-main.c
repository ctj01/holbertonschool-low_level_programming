#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - check the code for Holberton School students.
 *@argc : name
 *@argv : function pointer
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int (*cal)(int, int);
	int a, b, r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	 && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	cal = get_op_func(argv[2]);
	r = cal(a, b);
	printf("%d\n", r);

	return (0);

}
