#include "main.h"

/**
 * print_triangle - Prints a triangle, using # character
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int h, ind;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (ind = size - h; ind > 0; ind--)
				_putchar(' ');

			for (ind = 0; ind < h; ind++)
				_putchar('#');

			if (h == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
