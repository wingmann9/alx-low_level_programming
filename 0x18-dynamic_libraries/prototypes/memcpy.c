#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *           to by @src into that pointed to by @dest.
 * @dest: Pointer to the memory area to copy @src into.
 * @src: Source buffer to copy characters from.
 * @n: Number of bytes to copy from @src.
 *
 * Return: Pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
