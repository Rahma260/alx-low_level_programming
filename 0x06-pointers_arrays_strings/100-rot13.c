/*
 * file : 100-rot13.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * leet -  encodes a string using rot13.
 * @s : the string to be changed
 * Return: the string
 */
char *rot13(char *s)
{
	char *a = s;
	char offset;

	while (*s)
	{
		offset = (*s & 32) + 65;
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			*s = (*s - offset + 13) % 26 + offset;
		s++;
	}
	return (a);
}
