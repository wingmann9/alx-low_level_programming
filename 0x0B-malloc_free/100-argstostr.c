#include "main.h"

/**
 * astos - Concatenates all auments of the program into a sing;
 *             auments are separated by a new line in the sing.
 * @ac: Number of auments passed to the program.
 * @av: Array of pointers to the auments.
 *
 * Return: Pointer to the new sing, otherwise NULL.
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
