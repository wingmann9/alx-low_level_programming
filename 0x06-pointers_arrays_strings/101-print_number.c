#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar.
 * @n: Integer to be printed.
 *
 * Return: Void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
