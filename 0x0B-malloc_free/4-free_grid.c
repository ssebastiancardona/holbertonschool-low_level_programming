#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - libera memoria
 *
 * @grid: memoria a liberar
 * @height: largo
 * return: nadita
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
