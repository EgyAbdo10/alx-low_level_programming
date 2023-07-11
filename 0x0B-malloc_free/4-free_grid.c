#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - create an array of the same char
 * @grid: the size of the array
 * @height: the size of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
