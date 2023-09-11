/*
 * file : 3-alloc_grid
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d : pointer of type dog
 * @name : name of dog
 * @age :age of dog
 * @owner : owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
