/*
 * file : 2-print_dog.c
 * code written by : Rahma Khaled
 */
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog -  prints a struct dog
 * @d : pointer of type dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil\n)"));
		d->age ? (printf("Age: %f\n", d->age)) : (printf("Age: (nil\n)"));
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil\n)"));
	}
}
