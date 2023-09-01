/*
 * file name : 3-mul.c
 * written by : Rshma Khaled
 */
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char **argv)
{

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
