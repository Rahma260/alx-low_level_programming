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

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
		
			putchar(i + 48);
			putchar(j + 48);
			if (i <= 9 || j <= 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
