/*
 * file : 1-strncat.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * _strncat -  concatinates two strings
 * @src : the string to be concatinate with
 * @dest : the place to be concatinated
 * @n : the number of characters will be concatinated
 * Return: The pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
	;

	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}

	return (dest);
}
