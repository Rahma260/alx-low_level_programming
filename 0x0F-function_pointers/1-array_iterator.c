/*
 * file : 0-print_name.c
 * code written by : Rahma Khaled
 */
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array : the array to be treated
 * @size : size of array
 * @action : function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
