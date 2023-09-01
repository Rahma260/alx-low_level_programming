/*
 * file : 3-islower.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * _islower  -  Checks for lowercase character
  * @i: The character to be checked
  *
  * Return:1 if c is lowercase, 0 otherwise
  */
int _islower(int i)
{

	if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);

	_putchar('\n');

}
