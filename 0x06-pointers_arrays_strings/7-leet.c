/*
 * file : 7-leet.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s : the string to be changed
 * Return: the string
 */
char *leet(char *s)
{
	char *a = s;
	int j = 0;
	char b[] = {'A', 'E', 'O', 'T', 'L'};
	char n[] = {4, 3, 0, 7, 1};

	while (*s)
	{
		for (j = 0; j < 5; j++)
		{
			if (*s == b[j] || *s == b[j] + 32)
			{
				*s = n[j] + '0';
			}
		}
		s++;
	}
	return (a);
}
