/*
 * file : 0-print_list.c
 * code written by : Rahma Khaled
 */
#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h : pointer to the first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
