/*
 * file : 1-memcpy.c
 * code written by : Rahma Khaled
 */
#include "main.h"

/**
 * _memcpy -  copies memory area
 * @dest : memory area will be copied in
 * @src : memory area will be copied
 * @n : bytes of the memory area
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
