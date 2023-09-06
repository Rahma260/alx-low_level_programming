/*
 * file : 100-argstostr.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac : the first argument
 * @av : the second argument
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *array;
	int i, j, a, b;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (a = 0; av[j][a] != '\0'; a++)
			i++;
		i++;
	}
	array = malloc(i * sizeof(char));
	if (array == 0)
		return (NULL);

	b = 0;
	for (j = 0; j < ac; j++)
	{
		for (a = 0; av[j][a] != '\0'; a++)
		{
			array[b++] = av[j][a];
		}
		array[b++] = '\n';
	}
	array[b] = '\0';

	return (array);

}
