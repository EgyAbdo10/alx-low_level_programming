#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - create an array of the same char
 * @width: the size of the array
 * @height: the size of the array
 * Return: the final string on success
 */
int **alloc_grid(int width, int height)
{
int i;
int **rows;
int j;
int f;
if (width <= 0 || height <= 0)
return (NULL);
rows = malloc(sizeof(int *) * height);
if (rows == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
rows[i] = malloc(sizeof(int) * width);
if (rows[i] == NULL)
return (NULL);
}
for (j = 0; j < height; j++)
{
for (f = 0; f < width; f++)
{
rows[j][f] = 0;
}
}
return (rows);
}
