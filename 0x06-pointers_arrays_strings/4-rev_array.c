#include "main.h"

/**
 * reverse_array - Reverses an array of integers.
 * @a: Array of integers to be reversed.
 * @n: Number of elements in the array.
 *
 * Return: Void.
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
