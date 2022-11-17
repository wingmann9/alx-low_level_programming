#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 * @arg: List of arguments pointing to the character to be printed.
 *
 * Return: Void.
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - Print an integer.
 * @arg: List of arguments pointing to the integer to be printed.
 *
 * Return: Void.
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * print_float - Print a float.
 * @arg: List of arguments pointing to the float to be printed.
 *
 * Return: Void.
 */
void print_float(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}

/**
 * print_string - Print a string.
 * @arg: List of srguments pointing to the string to be printed.
 *
 * Return: Void.
 */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - Print anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 *
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
