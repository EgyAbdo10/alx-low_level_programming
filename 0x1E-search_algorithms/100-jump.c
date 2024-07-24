#include "search_algos.h"
#include <math.h>

/**
 * jump_search - apply the jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements of teh array
 * @value: teh value to search for
 * Return: the index of the searched value if found or (-1) if not
*/
int jump_search(int *array, size_t size, int value)
{
int m = (int)sqrt(size);
int low_idx = 0;
int high_idx = m;
int i;
if (array == NULL)
return (-1);
while (high_idx < (int)size - 1)
{
if (value <= array[high_idx] && value >= array[low_idx])
{
if (value == array[low_idx])
printf("Value checked array[%d] = [%d]\n", low_idx, array[low_idx]);
printf("Value found between indexes [%d] and [%d]\n",
array[low_idx], array[high_idx]);
for (i = low_idx; i <= high_idx; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (value == array[i])
return (i);
}
return (-1);
}
else
{
printf("Value checked array[%d] = [%d]\n", low_idx, array[low_idx]);
printf("Value checked array[%d] = [%d]\n", high_idx, array[high_idx]);
low_idx += m;
high_idx += m;
}
}
for (i = low_idx; i < (int)size - 1; i += m)
{
if (array[i] == value)
return (i);
}
return (-1);
}
