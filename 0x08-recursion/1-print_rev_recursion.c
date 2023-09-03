/*
 * file : 1-print_rev_recursion.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * _puts_recursion - Prints a string in reverse 
 * , followed by a new line, to stdout.
 * @s : the string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
