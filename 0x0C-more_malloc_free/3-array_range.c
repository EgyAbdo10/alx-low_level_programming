#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - make an array of integers
 * @min: the first int
 * @max: the last int
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
int *ptr;
int i;
if (min > max)
return (NULL);
ptr = malloc((max - min) + 1);
if (ptr == NULL)
return (NULL);
for (i = 0; max >= (min + i); i++)
ptr[i] = min + i;
return (ptr);
}
