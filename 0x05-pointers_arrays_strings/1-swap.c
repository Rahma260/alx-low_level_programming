/*
 * file : 1-swap.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a : the first integer to be swaped
 * @b : the second integer to be swaped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
