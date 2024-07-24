#include "search_algos.h"

/**
 * linear_search - apply the liear search algorithm
 * @array: the array of ints to search
 * @size: the number of elements of the array
 * @value: the value to search for
 * Return: the index of the int searched if found or (-1) if not
*/
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (array == NULL)
return (-1);
while (i < size)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
i++;
}
return (-1);
}
