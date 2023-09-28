/*
 * file : 100-get_endianness.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness.
 * Return: the index
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
