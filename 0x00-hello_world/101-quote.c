/*
 * file :101-qoute.c
 * code written by : Rahma Khaled
 * email: rahmakh248@gmail.com
 */
#include <unistd.h>
#include <stdio.h>
/**
 * main - Prints "Programming is like building a multilingual
 *puzzle, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
