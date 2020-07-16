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
	int a, b, op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}
	op = argv[2][0];

	switch (op)
	{
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
		break;
	default:
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	cal = get_op_func(argv[2]);
	printf("%d\n", cal(a, b));

	return (0);

}
