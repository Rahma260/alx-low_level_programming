/*
 * file :7-print_last_digit.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * print_last_digit  - Prints the last digit of number
  * @i: The number to be treated
  * Return: The last digit of number
  */
int print_last_digit(int i)
{
	int last = i % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + 48);

	return (last);
}
