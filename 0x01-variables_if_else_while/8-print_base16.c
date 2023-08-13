/*
 * file : 8-print_base16.c
 * code written by : Rahma Khaled
 */
#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
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

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
