/*
 * file : 101-print_comb4.c
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
	int i, j, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (l = j + 1; l <= 9; l++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(l + 48);
				if (i < 7 || j < 8 || l > 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
