/*
 * file : 102-print_comb5.c
 * code written by : Rahma Khaled
 */
#include <stdio.h>

/**
 * main - Prints all possible combinations of two digits numbers.
 * , followed by a new line and comma.
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
