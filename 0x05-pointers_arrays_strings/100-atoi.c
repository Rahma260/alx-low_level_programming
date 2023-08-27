/*
 * file : 100-atoi.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - Convert a string to an integer.
 * @s : the string to be converted
 * Return: integer
 */

int _atoi(char *s)
{
	char sign = 0;
	unsigned int num = 0;

	while (!(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
			sign = !sign;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
		if (!sign && num >= INT_MAX)
			return (INT_MAX);
		else if (sign && num > INT_MAX)
			return (INT_MIN);
	}
	if (sign)
		return (-num);
	return (num);
}
