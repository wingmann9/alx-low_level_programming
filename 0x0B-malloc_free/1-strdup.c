#include "main.h"

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: String to be copied.
 *
 * Return: Pointer to the duplicated string, otherwise NULL if str == NULL.
 */

char *_strdup(char *str)
{
	char *d;
	int n, ln = 0;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		ln++;

	d = malloc(sizeof(char) * (ln + 1));

	if (d == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		d[n] = str[n];

	d[ln] = '\0';

	return (d);
}
