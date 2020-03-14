#include "variadic_functions.h"

/**
 * f_char - Prints char
 * @lst: List of arguments
 */
void f_char(va_list lst)
{
	printf("%c", va_arg(lst, int));
}

/**
 * f_int - Prints int
 * @lst: List of arguments
 */
void f_int(va_list lst)
{
	printf("%i", va_arg(lst, int));
}

/**
 * f_float - Prints float
 * @lst: List of arguments
 */
void f_float(va_list lst)
{
	printf("%f", va_arg(lst, double));
}

/**
 * f_string - Prints string
 * @lst: List of arguments
 */
void f_string(va_list lst)
{
	char * str;

	if (str == NULL)
		printf("(nil)");

	printf("%s", va_arg(lst, char *));
}

/**
 * print_all - Prints anything
 * @format: List of types of arguments
 */

void print_all(const char * const format, ...)
{
	t_fmt types[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string},
		{NULL, NULL}
	};

	int i, j = 0;
	va_list lst;
	char *sep = "";

	va_start(lst, format);

	while (format && format[j])
	{
		i = 0;

		while (types[i].f != NULL)
		{
			if (types[i].type[0] == format[j])
			{
				printf("%s", sep);
				types[i].f(lst);
				sep = ", ";
				break;
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(lst);
}
