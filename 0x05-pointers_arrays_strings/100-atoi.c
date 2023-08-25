/*
 * file : 100-atoi.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * atoi - Convert a string to an integer.
 * @s : the string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	long num = 0;

	for (; s[i] != '\0'; i++)
	{
		num = num * 10 + (s[i] - 48);
	}
	return (num);
}
