#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: String to be printed.
 * Return: void.
 */

void print_rev(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;

	len = len - 1;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}

	_putchar('\n');
}
