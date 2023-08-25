/*
 * file : 3-strcmp.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * _strcmp -  compare two strings
 * @s1 : the first string.
 * @s2 : the second string.
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
