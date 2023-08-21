/*
 * file : 9-strcpy.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * _strcpy -  Copies the string
 * @src : the string to be copied
 * @dest : the place to copy in
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int i = 0;

	while (src[a] != '\0')
		a++;
	while (i < a + 1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
