/*
 * file : 1-print_binary.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <string.h>
/**
 * print_binary -  prints the binary representation of a number.
 * @n : the number to be converted
 * Return: void
 */
char *print_binary(unsigned long int n)
{
	char *p = "";

	if (n == 0)
		return (0);
	while (n > 0)
	{
		p = ((n & 1) == 0 ? 0 : 1) + p;
		n >>= 1;
	}
	return (p);
}
