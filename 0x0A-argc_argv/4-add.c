/*
 * file name : 4-add.c
 * written by : Rshma Khaled
 */
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - adds two numbers, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char **argv)
{
	int i = 1;
	int j;
	int add = 0;

	while (i <= argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Erorr\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}
