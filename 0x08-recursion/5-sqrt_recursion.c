#include "main.h"

/**
 * find_sqrt - Finds the natural square root of a number.
 * @num: Given number
 * @root: Root to be tested.
 *
 * Return: Square root of num, otherwise -1 for unatural square root.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Prints the natural square root of a number.
 * @n: Inputted number.
 *
 * Return: Natural square root of n, otherwise -1.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
