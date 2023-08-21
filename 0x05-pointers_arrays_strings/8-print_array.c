/*
 * file : 8-print_array.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * , followed by a new line.
 * @a : the array to be printed
 * @n : the size of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i < n)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
