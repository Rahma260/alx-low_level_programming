/*
 * file : 103-infinite_add.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1 : the first string
 * @n2 : the second string
 * @r : the result
 * @size_r : size of result
 * Return: the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, lenS = 0;

	while (*(n1 + len1++))
		;
	while (*(n2 + len2++))
		;
	printf("%d, %d\n", len1, len2);
	return (r);
}
