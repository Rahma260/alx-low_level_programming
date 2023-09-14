/*
 * file :  2-print_strings.c
 * code written by : Rahma Khaled
 */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @n : number of arguments
 * @separator : the string to be printed between strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (i < n && x != NULL)
			printf("%s", x);
		else if (x == NULL)
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(args);
}
