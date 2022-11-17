#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers with separator, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
