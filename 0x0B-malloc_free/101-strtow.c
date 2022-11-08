#include "main.h"

/**
 * word_ln - Locates the n marking the end of the
 *            first word contained within a string.
 * @str: String to be searched.
 *
 * Return: Index marking the end of the initial word pointed to by str.
 */

int word_ln(char *str)
{
	int n = 0, ln = 0;

	while (*(str + n) && *(str + n) != ' ')
	{
		ln++;
		n++;
	}

	return (ln);
}

/**
 * count_wrd - Counts the number of wrd contained within a string.
 * @str: String to be searched.
 *
 * Return: Number of wrd contained within str.
 */

int count_wrd(char *str)
{
	int n = 0, wrd = 0, ln = 0;

	for (n = 0; *(str + n); n++)
		ln++;

	for (n = 0; n < ln; n++)
	{
		if (*(str + n) != ' ')
		{
			wrd++;
			n += word_ln(str + n);
		}
	}

	return (wrd);
}

/**
 * strtow - Splits a string into wrd.
 * @str: String to be split.
 *
 * Return: Pointer to an array of strings, otherwise NULL.
 */

char **strtow(char *str)
{
	char **strings;
	int n = 0, wrd, w, lt, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wrd = count_wrd(str);
	if (wrd == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (wrd + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < wrd; w++)
	{
		while (str[n] == ' ')
			n++;

		lt = word_ln(str + n);

		strings[w] = malloc(sizeof(char) * (lt + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < lt; l++)
			strings[w][l] = str[n++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
