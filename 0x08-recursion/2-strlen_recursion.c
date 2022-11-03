#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: String to be measured.
 *
 * Return: Length of the string.
 */

int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s)
	{
		ln++;
		ln += _strlen_recursion(s + 1);
	}

	return (ln);
}
