#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: String to be searched.
 * @c: Character to be located.
 *
 * Return: Pointer if C is found. otherwise NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] > '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
