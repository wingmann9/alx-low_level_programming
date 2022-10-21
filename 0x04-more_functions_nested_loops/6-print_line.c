#include "main.h"

/**
 * print_line - displays the _ character to form a straight line.
 *@n: Number of times the _ character is printed.
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= n; count++)
			_putchar('_');
		_putchar('\n');
	}
}
