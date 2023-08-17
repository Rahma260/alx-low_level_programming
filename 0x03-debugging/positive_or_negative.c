/*
 * file : positive_or_negative.c
 * code written by : Rahma Khaled
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
void postitive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);

	}
}
