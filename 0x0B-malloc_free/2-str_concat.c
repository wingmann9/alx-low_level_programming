#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: String to be concatenated upon.
 * @s2: String to be concatenated to s1.
 *
 * Return: Pointerto the concatenated strings, otherwise NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *c_str;
	int n, c_n = 0, ln = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (n = 0; s1[n] || s2[n]; n++)
		ln++;

	c_str = malloc(sizeof(char) * ln);

	if (c_str == NULL)
		return (NULL);

	for (n = 0; s1[n]; n++)
		c_str[c_n++] = s1[n];

	for (n = 0; s2[n]; n++)
		c_str[c_n++] = s2[n];

	return (c_str);
}
