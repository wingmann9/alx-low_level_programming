#include "main.h"

/**
 * strcat - Concatenates the string pointed by @src,
 *          to the end of the string pointed to by @dest.
 * @dest: Pointer to the string to be concatenated.
 * @src: String to be appended to @dest.
 *
 * Return: Pointer to the destination string @dest.
 */

char *strcat(char *dest, const char *src)
{
	int indx = 0, dest_len = 0;

	while (dest[indx++])
		dest_len++;

	for (indx = 0; src[indx]; indx++)
		dest[dest_len++] = src[indx];

	return (dest);
}
