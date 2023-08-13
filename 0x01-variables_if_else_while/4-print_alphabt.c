/*
 * file : 4-print_alphabt.c
 * code written by : Rahma Khaled
 */
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * , followed by a new line.
 *
 * Return: Always (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}


	putchar('\n');

	return (0);
}
