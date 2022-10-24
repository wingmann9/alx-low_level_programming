#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String to be reversed.
 * Return: Void.
 */

void rev_string(char *s)
{
	int len = 0, ind = 0;
	char str[500];

	while (*(s + len))
	{
		*(str + len) = *(s + len);
		len++;
	}

	len = len - 1;
	while (len >= 0)
	{
		*(s + len) = *(str + ind);
		ind++;
		len--;
	}
}
