#include <stdio.h>
#include "function_pointers.h"
/**
 * @array: the array
 * @size: number of elemnts
 * @action: the function_pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i;
if (array == NULL || size == 0 || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
