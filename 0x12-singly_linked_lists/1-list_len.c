/*
 * file : 1-list_len.c
 * code written by : Rahma Khaled
 */
#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h : pointer to the first node
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
