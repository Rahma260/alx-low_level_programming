/*
 * file :  0-sum_them_all.c
 * code written by : Rahma Khaled
 */
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n : number of arguments
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int total, sum = 0;
	va_list args;

	va_start(args, n);
	for (; i < n; i++)
	{
		total = va_arg(args, unsigned int);
		sum += total;
	}
	va_end(args);
	return (sum);
}
