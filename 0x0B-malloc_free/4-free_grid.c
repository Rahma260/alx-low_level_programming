/*
 * file : 4-free_grid.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free _grid - free an array
 * @grid : the array will be freed
 * @height : the height of array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	unsigned int i;

	for (i = 0; i < height; i++)
		free(grid[a]);
	free(grid);
}
