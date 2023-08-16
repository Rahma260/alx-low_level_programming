/*
 * file :11-print_to_98.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * print_to_98  - Prints all natural numbers
  * from n to 98, followed by a new line.
  * @i: The number to start printing from
  * Return: Absolute value of number or zero
  */
void print_to_98(int i)
{
	int n = i;

	for (; n <= 98; n++)
	{
		_putchar(n + '0');
		if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
		if (n == '0')
		{
			_putchar(n + 48);
			break;
		}
	}

		for (; n >= 98; n--)
		{
		_putchar(n + '0');
		if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
		if (n == 98)
		{
			_putchar(n + '0');
			break;
		}
		else
			_putchar(n + '0');
		}
<<<<<<< HEAD
=======
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
>>>>>>> 6625331609edec7cd50b52beeff3f850358a590d
}
