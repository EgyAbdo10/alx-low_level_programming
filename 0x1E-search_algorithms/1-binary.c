#include "search_algos.h"
/**
 * binary_search_recursive - apply the liear search algorithm
 * @array: the array of ints to search
 * @size: the number of elements of the array
 * @value: the value to search for
 * @start_idx: the start index of the sub array
 * @end_idx: the end index of the sub array
 * Return: the index of the int searched if found or (-1) if not
*/
int binary_search_recursive(int *array, size_t size, int value,
int start_idx, int end_idx)
{
size_t i = 0;
int mid_idx;
if (array == NULL)
return (-1);
mid_idx = (end_idx + start_idx) / 2;
printf("Searching in array:");
while (i < size - 1)
{
printf(" %d,", array[start_idx + i]);
i++;
}
printf(" %d\n", array[end_idx]);
if (array[mid_idx] == value)
return (mid_idx);
if (end_idx == start_idx)
return (-1);
if (array[mid_idx] > value)
{
size = mid_idx - start_idx;
return (binary_search_recursive(array, size, value, start_idx, mid_idx - 1));
}
else
{
size = end_idx - mid_idx;
return (binary_search_recursive(array, size, value, mid_idx + 1, end_idx));
}
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
int idx = binary_search_recursive(array, size, value, 0, size - 1);
return (idx);
}
