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
	while (*s++ != '\0')
	{
		if(('a' <= *s) && (*s <= 'z'))
			*s = 'A' + (*s - 'a');
	}
	return (s);
}
