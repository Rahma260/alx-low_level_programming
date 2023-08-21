/*
 * file : 2-strlen.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * _strlen -  Returns the length of a string.
 * @s : the string will be counted
 * Return: The length of a string.
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
		len++;
	return (len);
}
