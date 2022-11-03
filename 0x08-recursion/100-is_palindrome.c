#include "main.h"

/**
 * find_strlen - Prints the length of a string.
 * @s: String to be measured.
 *
 * Return: Length of the string.
 */

int find_strlen(char *s)
{
	int ln = 0;

	if (*(s + ln))
	{
		ln++;
		ln += find_strlen(s + ln);
	}

	return (ln);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: String to be checked.
 * @len: Length of string.
 * @index: Index of the string to be checked.
 *
 * Return: - 1 (Palindrome), otherwise 0.
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: String to be checked.
 *
 * Return: - 1 (Palindrome). otherwise 0.
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
