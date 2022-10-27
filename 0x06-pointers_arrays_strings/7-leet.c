#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: String to be encoded.
 *
 * Return: Pointer to the encoded string.
 */

char *leet(char *str)
{
	int e1 = 0, e2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[e1])
	{
		for (e2 = 0; e2 <= 7; e2++)
		{
			if (str[e1] == leet[e2] ||
			    str[e1] - 32 == leet[e2])
				str[e1] = e2 + '0';
		}

		e1++;
	}

	return (str);
}
