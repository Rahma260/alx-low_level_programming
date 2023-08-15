/*
 * file :6-abs.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * _isalpha  - Prints the absolute value of number
  * @i: The number to be checked
  * Return : _abs value is lower than zero
  */
int _abs(int i)
{

	if (i < 0)
	{
		int j = i * -1;

		return (j);
	}
		
	else
		return (i);

	_putchar('\n');
}