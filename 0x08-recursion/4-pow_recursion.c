#include "main.h"

/**
 * _pow_recursion - Prints the value of x exponential y.
 * @x: Base number.
 * @y: Exponent.
 *
 * Return: Value of (x ^ y).
 */

int _pow_recursion(int x, int y)
{
	int value = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	value *= _pow_recursion(x, y - 1);

	return (value);
}
