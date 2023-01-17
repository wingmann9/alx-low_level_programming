#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: String whose length is to be determined.
 *
 * Return: Length of @str.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
