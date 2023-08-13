/*
 * file : 7-print_tebahpla.c
 * code written by : Rahma Khaled
 */
#include <stdio.h>

/**
 * main - Prints  the lowercase alphabet in reverse, followed by a new line.
 * , followed by a new line.
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
