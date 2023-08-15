/*
 * file : 1-alphabet.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
 * main - Prints letters in lower case followed by a new line.
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		putchar(i + 48);

	putchar('\n');
}
