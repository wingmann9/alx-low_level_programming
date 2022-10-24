#include "main.h"

/**
 * puts2 - Prints one char out of two in a string.
 * @str: String containing characters.
 *
 * Return: Void.
 */

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
