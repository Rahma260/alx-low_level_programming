/*
 * file : 5-print_numbers.c
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
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
