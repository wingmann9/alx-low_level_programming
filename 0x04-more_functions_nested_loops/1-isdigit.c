#include "main.h"

/**
 * _isdigit - checks for a digit for a range of numbers.
 * @c: Character to be checked.
 *
 * Return: 1 (Success), otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
