/*
 * file : 0-create_arrary.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array
 * @c : the array will be created
 * @size : the size of array
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *) malloc(size * sizeof(*array));

	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);

}
