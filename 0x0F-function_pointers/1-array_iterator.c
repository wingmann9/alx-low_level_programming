#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a
 *                  parameter on each element of an array.
 * @array: Array to execute the function on.
 * @size: Size of array.
 * @action: Pointer to the function to be executed.
 *
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL || action != NULL)

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
