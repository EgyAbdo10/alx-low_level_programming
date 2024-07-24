#include "search_algos.h"
/**
 * binary_search_recursive - apply the liear search algorithm
 * @array: the array of ints to search
 * @value: the value to search for
 * @start_idx: the start index of the sub array
 * @end_idx: the end index of the sub array
 * Return: the index of the int searched if found or (-1) if not
*/
int binary_search_recursive(int *array, int value,
int start_idx, int end_idx)
{
int mid_idx = (end_idx + start_idx) / 2;
if (array == NULL)
return (-1);
printf("Value checked array[%d] = [%d]\n", mid_idx, array[mid_idx]);
if (array[mid_idx] == value)
return (mid_idx);
if (end_idx == start_idx)
return (-1);
if (array[mid_idx] > value)
return (binary_search_recursive(array, value, start_idx, mid_idx - 1));
else
return (binary_search_recursive(array, value, mid_idx + 1, end_idx));
}


/**
 * binary_search - apply the liear search algorithm
 * @array: the array of ints to search
 * @size: the number of elements of the array
 * @value: the value to search for
 * Return: the index of the int searched if found or (-1) if not
*/
int binary_search(int *array, size_t size, int value)
{
int idx = binary_search_recursive(array, value, 0, size - 1);
return (idx);
}
