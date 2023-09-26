/*
 * File: 4-free_list.c
 * written by: Rahma Khaled
 */
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: pointer to the list_t list.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
