/*
 * file : 2-strlen_recursion.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * _puts_recursion - find the length of string
 * @s : the string to be counted
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
