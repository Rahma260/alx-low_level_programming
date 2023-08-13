/*
 * file : 3-print_alphabets.c
 * code written by : Rahma Khaled
 */
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase then in uppercase
 * , followed by a new line.
 *
 * Return: Always (Success)
 */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
