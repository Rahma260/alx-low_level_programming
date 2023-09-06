/*
 * file : 2-str_concat.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 * @s1 : the first string
 * @s2 : the second string
 * Return: The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, j, b, a;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;
	array = malloc(i * sizeof(*s1) + j * sizeof(*s2));
	if (array == 0)
		return (NULL);

	for (a = 0, b = 0; a < i + j; a++)
	{
		if (a < i)
			array[a] = s1[a];
		else
			array[a] = s2[b++];
	}

	return (array);

}
