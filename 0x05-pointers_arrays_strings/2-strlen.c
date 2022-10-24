#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: String whose length is to be determined.
 *
 * Return: Length of @str.
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
