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
	int j = 0;

	for (; s1[i] != '\0'; i++)
	{
		for (; s2[j] != '\0'; j++)
		{
			if (s1[i] > s2[j])
				return (15);
			else if (s1[i] < s2[j])
				return (-15);
			else
				return (0);
		}
	}
	return (0);
}
