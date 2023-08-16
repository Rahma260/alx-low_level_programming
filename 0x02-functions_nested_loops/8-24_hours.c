/*
 * file :8-24_hours.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * jack_bauer - Prints every minute of the day of Jack Bauer,
  * starting from 00:00 to 23:59.
  * Return: void
  */
void jack_bauer(void)
{
	int a;

	for (a = 0; a <= 2; a++)
	{
		for (a = 0; a <= 3; a++)
		{
			_putchar(':');
			for (a = 0; a <= 5; a++)
			{
				for (a = 0; a <= 9; a++)
				{
					_putchar(a + 48);
					_putchar('\n');
				}
			}
		}
	}
}
