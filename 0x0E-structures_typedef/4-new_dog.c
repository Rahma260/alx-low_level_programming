/*
 * file : 4-new_dog.c
 * code written by : Rahma Khaled
 */
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - create a new dog
 * @name : name of dog
 * @age :age of dog
 * @owner : owner of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_rk;
	int i, n_len = 0;
	int o_len = 0;

	while (name[n_len] != '\0')
		n_len++;
	n_len++;
	while (owner[o_len] != '\0')
		o_len++;
	o_len++;
	dog_rk = malloc(sizeof(dog_t));
	if (dog_rk == NULL)
		return (NULL);
	dog_rk->name = malloc(n_len * sizeof(dog_rk->name));
	if (dog_rk == NULL)
		return (NULL);
	for (i = 0; i < n_len; i++)
		dog_rk->name[i] = name[i];
	dog_rk->age = malloc(sizeof(dog_rk->age);
	if (dog_rk == NULL)
		return (NULL);
	dog_rk->age = age;
	dog_rk->owner = malloc(o_len * sizeof(dog_rk->owner));
	if (dog_rk == NULL)
		return (NULL);
	for (i = 0; i < o_len; i++)
		dog_rk->owner[i] = owner[i];
	return (dog_rk);
}
