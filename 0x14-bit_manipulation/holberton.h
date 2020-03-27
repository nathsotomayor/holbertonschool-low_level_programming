#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>

int _putchar(char c);
unsigned int _pow(int x, unsigned int y);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
