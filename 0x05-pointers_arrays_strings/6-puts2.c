/*
 * file : 6-puts2.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * , starting with the first character
 * , followed by a new line.
 * @str : the string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int a = 0;

	while (str[a] != '\0')
		a++;
	while (i < a)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');

}
