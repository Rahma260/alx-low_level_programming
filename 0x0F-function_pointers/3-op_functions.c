/*
 * file : 3-op_functions.c
 * code written by : Rahma Khaled
 */
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two integers
 * @a : the first parameter
 * @b : the second parameter
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a : the first parameter
 * @b : the second parameter
 * Return: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two integers
 * @a : the first parameter
 * @b : the second parameter
 * Return: integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two integers
 * @a : the first parameter
 * @b : the second parameter
 * Return: integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modilas two integers
 * @a : the first parameter
 * @b : the second parameter
 * Return: integer
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
