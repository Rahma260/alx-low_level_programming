/*
 * file : 1-isdigit.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * _isdigit - Checks for digits.
  * @i: The character to be checked
  * Return: 1 if i is digit ,0 otherwise
  */
int _isdigit(int i)
{

	if (i >= 30 && i <= 39)
	{
		return (1);
	}
	else
		return (0);
}
