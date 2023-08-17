/*
 *
 * file : 10-print_triangle.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size : the integer to be checked
 * Return: void
 */
void print_triangle(int size)
{
	int x, y = 0;
	int space;

	if (size > 0)
	{
		while (y < size)
		{
			space = size - y - 1;
			while (x < size)
			{
				if (space > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
