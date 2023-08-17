/*
 * file : 4-print_most_numbers.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9
 * without 2 and 4, followed by a new line
 * Return: void
 */
void print_most_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + 48);
		}
	}

	_putchar('\n');

}
