#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @separator: Pointer to string to print
 * @n: Constant parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ltp;
	unsigned int i;
	char *p;

	va_start(ltp, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(ltp, char *);

		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);

		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ltp);
}

