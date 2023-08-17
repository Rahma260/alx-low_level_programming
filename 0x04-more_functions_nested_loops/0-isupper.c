/*
 * file : 0-isupper.c
 * code written by : Rahma Khaled
 */
#include "main.h"
/**
  * _isupper - Checks for uppercase character.
  * @i: The character to be checked
  * Return: 1 if c is uppercase ,0 otherwise
  */
int _isupper(int i)
{

	if (i >= 65 && i <= 90)
	{
		return (1);
	}
	else
		return (0);
}
