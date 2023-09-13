/*
 * file : 0-print_name.c
 * code written by : Rahma Khaled
 */
#include "function_pointers"

/**
 * print_name - prints a name
 * @name : the name that shoud be printed
 * @f : function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
