#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings followed by a new line.
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sp;
	char *s;
	unsigned int i;

	va_start(sp, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(sp, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(sp);
}
