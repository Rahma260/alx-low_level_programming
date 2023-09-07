/*
 * file : 0-malloc_checked
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b : the size of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *array = malloc(b);

	if (array == NULL)
		exit(98);
	return (array);
}
