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
	int a;
	long n = 612852475143;

	for (a = (int)n * n; a > 2; a++)
	{
		if (n % a == 0)
		{
			printf("%d\n", a);
			break;
		}
	}

	return (0);
}
