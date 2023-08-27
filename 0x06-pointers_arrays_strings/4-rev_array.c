/*
 * file : 4-rev_array.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a : the array to be reversed
 * @n : the number of elements of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int strt = 0;
	int end;
	int tmp;

	end = n - 1;
	while (strt < end)
	{
		tmp = a[strt];
		a[strt] = a[end];
		a[end] = tmp;
		strt++;
		end--;
	}
}
