/*
 * file : 0-print_list.c
 * code written by : Rahma Khaled
 */
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h : pointer to the first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	while (h != NULL)
	{
		printf("%s", h->str);
		h = h->next;
		count++;
	}
	return (count);
}
