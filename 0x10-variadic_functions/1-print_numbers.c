/*
 * file :  1-print_numbers.c
 * code written by : Rahma Khaled
 */
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n : number of arguments
 * @separator : the string to be printed between numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		if (i < n)
			printf("%d", x);
		if (i < n - 1 && separator != NULL)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(args);
}
