/*
 * file : 1-print_binary.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n : the number to be converted
 * Return: void
 */
char *print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar ('1');
		return;
	}
	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
