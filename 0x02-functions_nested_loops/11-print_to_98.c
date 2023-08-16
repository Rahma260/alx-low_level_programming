/*
 * file :11-print_to_98.c
 * code written by : Rahma Khaled
 */
#include <stdio.h>
#include "main.h"
/**
  * print_to_98  - Prints all natural numbers
  * from n to 98, followed by a new line.
  * @i: The number to start printing from
  * Return: Absolute value of number or zero
  */
void print_to_98(int i)
{
	if (i <= 98)
	{
		for (; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
		printf("\n");
	}
	else if (i > 98)
	{
		for (; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
		printf("\n");
	}
	else
		printf("%d\n", i);
}
