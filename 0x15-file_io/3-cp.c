#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char **argv)
{
	int num1 = 1024, num2 = 0;
	char buf[1024];
	int filefrom, fileto;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]), exit(98);
	fileto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fileto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(filefrom), exit(99);
	}
	while (num1 == 1024)
	{
		num1 = read(filefrom, buf, 1024);
		if (num1 == 1024)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		num2 = write(fileto, buf, num1);
		if (num2 < num1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(filefrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom), exit(100);
	if (close(fileto) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto), exit(100);
	return (0);
}
