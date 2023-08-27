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
		if ((s[i] == ' ' || s[i] == '\n')
				&& ('a' <= s[i + 1] && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		else if (s[i] == '\t' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i] = ' ';
			s[i + 1] -= 32;
		}
		else if ((s[i] == ',' || s[i] == '.' || s[i] == ';'
					|| s[i] == '!' || s[i] == '?'
					|| s[i] == '"' || s[i] == '('
					|| s[i] == ')' || s[i] == '{' || s[i] == '}')
					&& ('a' <= s[i + 1] && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
	}
	return (s);
}
