/*
 * file : 5-string_toupper.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s : the string to be changed
 * Return: the string
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
