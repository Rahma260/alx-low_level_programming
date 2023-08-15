/*
 * file :11-print_to_98.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * print_to_98  - Prints all natural numbers
  * from n to 98, followed by a new line.
  * @i: The number to start printing from
  * Return: Absolute value of number or zero
  */
void print_to_98(int i)
{
	int n;

	for (n = i; n <= 98; n++)
		{
			_putchar(n + 48);
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
}
