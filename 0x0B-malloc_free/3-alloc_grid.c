#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - allocate a 2d integer grid
 *
 * @width: width of grid
 * @height: height of grid
 * Return: returns pointer to grid created
 */
int **alloc_grid(int width, int height)
{
	int **reja, i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	reja = malloc(height * sizeof(int *));
	if (reja == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		reja[i] = malloc(width * sizeof(int));
		if (reja[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(reja[i]);
				i--;
			}
			free(reja);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			reja[j][k] = 0;
		}
	}
	return (reja);
}
