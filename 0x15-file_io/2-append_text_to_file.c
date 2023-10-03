/*
 * file : 2-append_text_to_file.c
 * code written by : Rahma Khaled
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * append_text_to_file - append text at the end of file
 * @filename: variable pointer
 * @text_content: NULL terminated string to write to the file
 * Description: Create a function that creates a file.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	write(file, text_content, i);
	return (1);
}
