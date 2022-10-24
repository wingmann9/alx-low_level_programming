#include "main.h"

/**
 * puts2 - Prints one char out of two in a string.
 * @str: String containing characters.
 *
 * Return: Void.
 */

void puts2(char *str)
{
	int l = 0;

	while (*(str + l))
	{
		_putchar(*(str + l));
		l = l + 2;
	}

	_putchar('\n');
}
