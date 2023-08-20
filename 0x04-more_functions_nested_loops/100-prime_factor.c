/*
 * file : 100-prime_factor.c
 * code written by : Rahma Khaled
 */
#include <stdio.h>
#include <math.h>
/**
 * main - Prints the largest prime factor
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c;
	long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
