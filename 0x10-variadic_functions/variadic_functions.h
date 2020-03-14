#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct type_fmt - struct formats
 *
 * @type: formats
 * @f: The function associated
 */
typedef struct type_fmt
{
	char *type;
	void (*f)(va_list);
} t_fmt;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void f_char(va_list lst);
void f_int(va_list lst);
void f_float(va_list lst);
void f_string(va_list lst);

#endif
