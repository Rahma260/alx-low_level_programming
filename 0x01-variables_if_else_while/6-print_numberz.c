/*
 * file : 6-print_numberz.c
 * code written by : Rahma Khaled
 */
#include <stdio.h>

/**
 * main - Prints  all single digit numbers of base 10 starting from 0
 * , followed by a new line.
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}

	putchar('\n');

	return (0);
}
