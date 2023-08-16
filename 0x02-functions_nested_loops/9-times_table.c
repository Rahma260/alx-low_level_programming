/*
 * file : 9-times_table.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * time_table - Prints the 9 times table, starting with 0.
  * Return: void
  */
void times_table(void)
{
	int i, j, a, b, c;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			a = i * j;
			if (a > 9)
			{
				b = a % 10;
				c = (a - b) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(c + 48);
				_putchar(b + 48);
			}
			else 
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(a + 48);
			}
		}
		 _putchar('\n');
	}
}

