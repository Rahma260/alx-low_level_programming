/*
 * file : 7-puts_half.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str : the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int a = 0;
	int n;
	int c;

	while (str[a] != '\0')
		a++;
	n = a / 2;
	c = (a - 1) / 2;
	if (a % 2 == 0)
	{
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		while (str[c] != '\0')
		{
			_putchar(str[c]);
			c++;
		}
	}
	_putchar('\n');

}
