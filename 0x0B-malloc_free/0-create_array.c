#include "main.h"

/**
 * create_array - Creates an array of chars and
 *			initializes it with a specific char.
 * @size: Size of array to be initialized.
 * @c: Specific char to initialize the array.
 *
 * Return: Pointer to the array, otherwise NULL if size == 0.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int n;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		a[n] = c;

	return (a);
}
