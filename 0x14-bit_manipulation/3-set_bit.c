/*
 * file : 3-set_bit.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdlib.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n : the number
 * @index :  is the index, starting from 0 of the bit you want to get
 * Return: the index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}
