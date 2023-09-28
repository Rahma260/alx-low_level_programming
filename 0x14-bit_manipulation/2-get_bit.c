/*
 * file : 0-binary_to_uint.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <string.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n : the number
 * @index :  is the index, starting from 0 of the bit you want to get
 * Return: the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n = (n >> index) & 1;
	return (n);
}
