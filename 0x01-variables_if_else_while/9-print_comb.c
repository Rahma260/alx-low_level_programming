/*
 * file : 9-print_comb.c
 * code written by : Rahma Khaled
 */
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * , followed by a new line and comma.
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
