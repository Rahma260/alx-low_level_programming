/*
 * file : 101-print_number.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * print_number - Prints an integer
 * @n : the integer to be printed
 * Return: void
 */
void print_number(int n)
{
	long a;
	int i = 1;
	int j = 1;

	a = n;
	if (a < 0)
	{
		a = a * -1;
		_putchar('-');
	}
	while (j)
	{
		if ((a / 10) > 0)
			i *= 10;
		else
			j = 0;
	}
	while (a >= 0)
	{
		if (i == 1)
		{
			_putchar(a % 10 + 48);
			a = -1;
		}
		else 
		{
			_putchar(a / i + 48);
			_putchar(a % 10 + 48);
			i = i / 10;
		}
	}
}
