/*
 * file : 5-more_numbers.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 * , followed by a new line.
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(b + 48);
		}
		_putchar('\n');
	}
}
