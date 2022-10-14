#include <stdio.h>

/**
 * main - Prints in reverse the Alphabets in lowercase.
 *
 * Return: 0 (Success).
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
