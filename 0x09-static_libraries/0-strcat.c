/*
 * file : 0-strcat.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * _strcat -  concatinates two strings
 * @src : the string to be concatinate with
 * @dest : the place to be concatinated
 * Return: The pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
	;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
