#include "main.h"

/**
 * print_diagonal - draws a diagonal line across the stdout with the \ characharacter.
 * @n: Number of times the \ character is printed.
 */

void print_diagonal(int n)
{
	int count, blank;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (blank = 0; blank < count; blank++)
				_putchar(' ');
			_putchar('\\');

			if (count == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
