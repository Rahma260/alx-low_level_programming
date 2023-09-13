/*
 * file : 2-int_index.c
 * code written by : Rahma Khaled
 */
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array : the array to be treated
 * @size : size of array
 * @action : function pointer
 * Return: the index of the first element for
 * which the cmp function does not return 0
 * If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
