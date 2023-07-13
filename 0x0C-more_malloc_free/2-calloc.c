#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate and intialize to zero
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
int all = 0;
int *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
all = nmemb * size;
ptr = malloc(all);
if (ptr == NULL)
return (NULL);
while (i < nmemb)
{
ptr[i] = 0;
i++;
}
return (ptr);
}
