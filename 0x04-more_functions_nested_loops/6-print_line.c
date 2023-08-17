/*
 * file : 6-print_line.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n : the integer to be checked
 * Return: void
 */
void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		for (; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
