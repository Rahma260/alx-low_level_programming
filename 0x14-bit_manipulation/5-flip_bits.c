/*
 * file : 5-flip_bits.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - sets the value of a bit to 1 at a given index.
 * @n : the number
 * @m :  the number that n will converted to
 * Return: the index
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n1, m1, count = 0;

	while (n || m)
	{
		n1 = n & 1;
		m1 = m & 1;
		if (n1 != m1)
			count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
