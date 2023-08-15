/*
 * file : 1-alphabet.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
