#include "main.h"

/**
 * is_divisible - Checks if a number is divisible.
 * @num: Given number.
 * @div: Divisor.
 *
 * Return: 0 (Success), otherwise -1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: Inputted number.
 *
 * Return: -1 (Prime number), otherwise 0.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
