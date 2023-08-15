/*
 * file : 4-isalpha.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * _isalpha  -  Checks for alphabetic character.
  * @i: The character to be checked
  *
  * Return:1 if c is lowercase, 0 otherwise
  */
int _isalpha(int i)
{

	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
		return (1);
	else
		return (0);

	_putchar('\n');

}
