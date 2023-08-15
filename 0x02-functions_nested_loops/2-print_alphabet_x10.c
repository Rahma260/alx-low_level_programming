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
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}

}
