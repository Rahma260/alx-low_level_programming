i/*
 * file : 1-strdup.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str : the array will be duplicated
 * Return: char
 */

char *_strdup(char *str)
{
	char *array;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	array = malloc(i * sizeof(*a) + 1);
	if (array == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		a[j] = str[j];
	a[j] = '\0';

	return (a);
}
