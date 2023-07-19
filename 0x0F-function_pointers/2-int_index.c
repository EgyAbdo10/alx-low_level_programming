#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - check what matches
 * @array: array of ints
 * @size: nuber of elements
 * @cmp: a fuction_pointer
 * Return: the index of the matched int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
return (0);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
