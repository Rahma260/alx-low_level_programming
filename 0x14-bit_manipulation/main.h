#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
unsigned int binary_to_uint(const char *b);
char *print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
