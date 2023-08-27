/*
 * file : 6-cap_string.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s : the string to be changed
 * Return: the string
 */
char *cap_string(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		else if ((s[i] == ',' || s[i] == '.' || s[i] == ';'
		|| s[i] == '!' || s[i] == '?'
		|| s[i] == '"' || s[i] == '('
		|| s[i] == ')' || s[i] == '{'
		|| s[i] == '}' || s[i] == ' '
		|| s[i] == '\n' || s[i] == '\t')
		&& ('a' <= s[i + 1] && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
	}
	return (s);
}
