/*
 * file : 5-rev_string.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * rev_string - Reverses a string
 * @s : the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	char tmp;

	while (s[i] != '\0')
		a++;
	while (i < (a / 2))
	{
		tmp = s[i];
		s[i] = s[a - i - 1];
		s[a - i - 1] = tmp;
		i++;
	}
}
