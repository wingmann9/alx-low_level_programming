#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @b.
 * @s: Pointer to the memory area to be filled.
 * @b: Character to fill the memory area with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (s);
}
