#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @s: String to be printed.
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
