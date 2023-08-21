/*
 * file : 4-print_rev.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s : the string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int a = 0;

	while (s[a] != '\0')
		a++;
	i = a;
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');

}
