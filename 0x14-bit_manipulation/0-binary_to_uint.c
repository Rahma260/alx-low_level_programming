/*
 * file : 0-binary_to_uint.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <string.h>
/**
 * binary_to_uint - convert binary number to a unsigned
 * @b : the string to be converted
 * Return: the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int newb;

	if (b == NULL)
		return (0);
	for (i = 0, newb = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);
		else if (b[i] == '1')
			newb = (newb << 1) | 1;
		else if (b[i] == '0')
			newb = newb << 1;
	}
	return (newb);
}
