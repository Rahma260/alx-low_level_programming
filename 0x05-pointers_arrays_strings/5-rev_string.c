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
	int strt = 0;
	int end;
	int a = 0;
	char tmp;

	while (s[a] != '\0')
		a++;
	end = a - 1;
	while (strt < end)
	{
		tmp = s[strt];
		s[strt] = s[end];
		s[end] = tmp;
		strt++;
		end--;
	}
}
