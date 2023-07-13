#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check the functionality of malloc
 * @b: the size ot the memory allocated
 * Return: A pointer to the allocated memory on success and exit on failure
 */
void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
