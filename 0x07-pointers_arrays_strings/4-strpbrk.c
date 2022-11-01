#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String to be searched.
 * @accept: Set of bytes to be searched for.
 *
 * Return: Pointer to set of the matched byte, otherwise NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
