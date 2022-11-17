#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol: Symbol representing a data type.
 * @print: Function pointer to a function that prints a data type
 *		corresponding to symbol.
 *
 * Desc: Header file containing a struct function and
 *		all functions prototype in the directory.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
