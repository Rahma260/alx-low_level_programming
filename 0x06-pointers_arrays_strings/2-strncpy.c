/*
 * file : 1-strncpy.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * _strncpy -  Copies the string
 * @src : the string to be copied
 * @dest : the place to copy in
 * @n : the number of characters should be copies
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0' && n > 0)
	{
		dest[j] = src[i];
		j++;
		i++;
		n--;
	}
	return (dest);
}
