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
	unsigned int newb = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		newb <<= 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			newb |= 1;
		b++;
	}
	return (newb);
}
