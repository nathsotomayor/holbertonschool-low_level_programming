#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Pointer to string
 * @f: Pointer to function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
