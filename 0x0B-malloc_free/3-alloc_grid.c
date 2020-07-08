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
	int i = 0, d = 0;
	int **matriz = NULL;

	if (height <= 0 || width <= 0)
		return (matriz);

	matriz = (int **)malloc(height * sizeof(int));
	if (matriz != NULL)
	{
		for (i = 0; i < height; i++)
		{
			matriz[i] = (int *)malloc(width * sizeof(int));
		}
		for (i = 0; i < height; i++)
		{
			for (d = 0; d < width; d++)
			{
				matriz[i][d] = 0;
			}
		}
	}
	return (matriz);
}
