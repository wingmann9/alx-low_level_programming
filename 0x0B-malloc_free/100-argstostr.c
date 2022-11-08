#include "main.h"

/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * @ac: Number of arguments passed to the program.
 * @av: Array of pointers to the arguments.
 *
 * Return: Pointer to the new string, otherwise NULL.
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, n, q = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			q++;
	}

	s = malloc(sizeof(char) * q + 1);

	if (s == NULL)
		return (NULL);

	n = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s[n++] = av[a][b];

		s[n++] = '\n';
	}

	s[q] = '\0';

	return (s);
}
