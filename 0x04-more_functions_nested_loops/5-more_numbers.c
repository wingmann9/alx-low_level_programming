#include "main.h"

/**
 * more_numbers - prints the range of numbers 10 times.
 */

void more_numbers(void)
{
	int n, count;

	for (count = 1; count <= 10; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
