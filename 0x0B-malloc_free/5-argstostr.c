#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s : is a parameter
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int z = 0;

	if (*s != '\0')
	{
		z =  _strlen_recursion(++s);
		z++;
	}
	return (z);

}

/**
 * argstostr - check the code for Holberton School students.
 * @ac : is a parameter
 * @av : is a parameter
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, d = 0, z = 0, j = 0;
	char *p = NULL;

	if (ac == 0 || av == NULL)
	{
		return (p);
	}
	for (i = 0; i < ac; i++)
	{
		d += _strlen_recursion(av[i]);
	}
	p = (char *)malloc((d + 1));
	if (p != NULL)
	{
		d = 0;
		for (z = 0; z < ac; z++)
		{
			for (j = 0; av[z][j] ! = '\0'; j++)
			{
				p[d] = av[z][j];
				d++;

			}
			p[d] = '\n';
			d++;

		}
		p[d] = '\0';

	}
	else
	{
		free(p);
	}
	return (p);
}
