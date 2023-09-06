/*
 * file : 3-alloc_grid
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width : the width of array
 * @height : the height of the array
 * Return: integer
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == 0)
		{
			for (j = 0; j < width; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
