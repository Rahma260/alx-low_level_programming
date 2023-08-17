/*
 * file : 7-print_diagonal.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * print_diagonal - Draws a straight line in the terminal.
 * @n : the integer to be checked
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(32);
				j++;
			}
			i++;
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
