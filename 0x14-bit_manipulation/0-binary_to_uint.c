#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: Converted number, otherwise NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int len;
	unsigned int dec;

	i = len = dec = 0;
	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}
	while (i < len)
	{
		dec = dec << 1;
		if (b[i] == '1')
			dec += 1;
		i++;
	}
	return (dec);
}
