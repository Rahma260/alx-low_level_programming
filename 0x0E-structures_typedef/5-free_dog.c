/*
 * file : 5-free_dog.c
 * code written by : Rahma Khaled
 */
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free dogs
 * @d : pointer of type dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
