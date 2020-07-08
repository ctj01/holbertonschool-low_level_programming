#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - check the code for Holberton School students.
 *@width : is a parameter
 *@height : is a parameter
 * Return: nothing.
 */

int **alloc_grid(int width, int height)
{
	int **matriz;
	int i, d;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	matriz = malloc(height * sizeof(int *));
	if (matriz == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matriz[i] = (int *)malloc(width * sizeof(int));
		if (matriz[i] == NULL)
		{
			for (i = width; i >= 0; i--)
			{
				free(matriz[i]);
			}
			free(matriz);
			matriz = NULL;
			return (matriz);
		}
		for (d = 0; d < width; d++)
		{
			matriz[i][d] = 0;
		}
	}
	return (matriz);
}
