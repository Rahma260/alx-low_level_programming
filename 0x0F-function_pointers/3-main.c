#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*opss)(int, int);

	if (argc != 4)
	{
		printf("Erorr\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Erorr\n");
		exit(99);
	}
	opss = get_op_func(argv[2]);
	if (opss == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", opss(a, b));
	return (0);
}
