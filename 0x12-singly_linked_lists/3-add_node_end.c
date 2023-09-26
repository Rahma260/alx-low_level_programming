/*
 * file : 2-add_node.c
 * code written by : Rahma Khaled
 */
#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_node_end - add anew node at the end
 * @head : pointer to the first node
 * @str : the data
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *sstr;
	list_t *node, *last;
	int len;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	sstr = strdup(str);
	if (sstr == NULL)
	{
		free(node);
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
		;
	node->str = sstr;
	node->len = len;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}
	return (*head);
}
