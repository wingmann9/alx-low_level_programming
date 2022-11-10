#include "main.h"

/**
 * array_range - Creates an array of integers ranging
 *               from min to max.
 * @min: First value of the array.
 * @max: Last value of the array.
 *
 * Return: Pointer to the newly created array, otherwise NULL if min > max.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
