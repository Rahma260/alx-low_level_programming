/*
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
	unsigned int i = 0;
	char *array = (char *) malloc(sizeof(*str));

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		array[i] = str[i];
		i++;
	}
	for (i = 0; array[i] != '\0'; i++)
		;
	array[i] = '\0';
	return (array);


}
