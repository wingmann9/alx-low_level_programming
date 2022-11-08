#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: Width of the 2-dimensional array.
 * @height: Height of the 2-dimensional array.
 *
 * Return: Pointer to the 2-dimensional array of integers,
 *		otherwise NULL if width = height <= 0.
 */

int **alloc_grid(int width, int height)
{
	int **d;
	int h_n, w_n;

	if (width <= 0 || height <= 0)
		return (NULL);

	d = malloc(sizeof(int *) * height);

	if (d == NULL)
		return (NULL);

	for (h_n = 0; h_n < height; h_n++)
	{
		d[h_n] = malloc(sizeof(int) * width);

		if (d[h_n] == NULL)
		{
			for (; h_n >= 0; h_n--)
				free(d[h_n]);

			free(d);
			return (NULL);
		}
	}

	for (h_n = 0; h_n < height; h_n++)
	{
		for (w_n = 0; w_n < width; w_n++)
			d[h_n][w_n] = 0;
	}

	return (d);
}
