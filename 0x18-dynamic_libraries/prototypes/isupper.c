#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: Character to be checked.
 *
 * Return: 1 (Success), otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
