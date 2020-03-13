#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 * @separator: Pointer to string to print
 * @n: Constant parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ltp;
	unsigned int i;

	va_start(ltp, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ltp, int));

		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ltp);
}

