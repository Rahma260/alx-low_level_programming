/*
 * file : 8-print_square.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size : the integer the counter stopped in.
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
