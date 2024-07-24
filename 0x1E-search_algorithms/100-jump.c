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
printf("Value checked array[%d] = [%d]\n", low_idx, array[low_idx]);
while (high_idx < (int)size)
{
if (value <= array[high_idx] && value >= array[low_idx])
{
printf("Value found between indexes [%d] and [%d]\n",
low_idx, high_idx);
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
low_idx += m;
high_idx += m;
printf("Value checked array[%d] = [%d]\n", low_idx, array[low_idx]);
}
}
printf("Value found between indexes [%d] and [%d]\n",
low_idx, high_idx);
for (i = low_idx; i < (int)size; i += 1)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
