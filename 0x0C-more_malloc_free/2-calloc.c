#include "main.h"

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: Number of elements.
 * @size: Byte size of each array element.
 *
 * Return: Pointer to the allocated memory, otherwise NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	filler = memory;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (memory);
}
