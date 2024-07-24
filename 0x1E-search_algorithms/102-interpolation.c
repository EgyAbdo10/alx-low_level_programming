#include "search_algos.h"

/**
 * interpolation_search_recursive - apply interpolation search algorithm
 * @array: the array to earch in
 * @size: the number of elements
 * @value: the value to earch for
 * @low_idx: the first index to search
 * @high_idx: the last index to search
 * Return: the index of the value passed or (-1) if not found
*/
int interpolation_search_recursive(int *array, size_t size,
int value, int low_idx, int high_idx)
{
int probe;
probe = low_idx + (((double)(high_idx - low_idx) / (array[high_idx]
- array[low_idx])) * (value - array[low_idx]));
/*
 * probe = low_idx +
 * ((value - array[low_idx]) / (array[high_idx] - array[low_idx]))
 * * (high_idx - low_idx);
*/
if (probe > (int)size - 1)
{
printf("Value checked array[%d] is out of range\n", probe);
return (-1);
}
printf("Value checked array[%d] = [%d]\n", probe, array[probe]);
if (array[probe] == value)
return (probe);
if (low_idx == high_idx)
return (-1);
else if (array[probe] > value)
{
size = probe - low_idx;
return (interpolation_search_recursive(array, size,
value, low_idx, probe - 1));
}
else
{
size = high_idx - probe;
return (interpolation_search_recursive(array, size, value,
probe + 1, high_idx));
}
}

/**
 * interpolation_search - apply interpolation search algorithm
 * @array: the array to earch in
 * @size: the number of elements
 * @value: the value to earch for
 * Return: the index of the value passed or (-1) if not found
*/
int interpolation_search(int *array, size_t size, int value)
{
int idx;
if (array == NULL)
return (-1);
idx = interpolation_search_recursive(array, size, value, 0, size - 1);
return (idx);
}
