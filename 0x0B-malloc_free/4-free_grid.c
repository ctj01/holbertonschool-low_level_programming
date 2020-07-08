#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - check the code for Holberton School students.
 *@grid : is a parameter
 *@height : is a parameter
 * Return: nothing.
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
	{
		free(grid[i]);
	}

	free(grid);

	grid = NULL;
}
