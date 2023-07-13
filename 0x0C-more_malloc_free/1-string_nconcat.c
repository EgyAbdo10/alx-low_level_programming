#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
return (NULL);
}
return (ptr);
}

/**
 * string_nconcat - create an array of the same char
 * @s1: the size of the array
 * @s2: the size of the array
 * @n: number of bytes taken from s2
 * Return: the final string on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, f, j, all, start;
char *new_str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = strlen(s2);
f = strlen(s1);
all = i + f + 1;
if (n >= (i))
{
new_str = malloc_checked(sizeof(char) * (all));
for (j = 0; j < f; j++)
{
new_str[j] = s1[j];
}
for (i = 0; j < all; i++, j++)
{
new_str[j] = s2[i];
}
}
else if (n < i)
{
new_str = malloc_checked(sizeof(char) * (n + i + 1));
for (j = 0; j < f; j++)
{
new_str[j] = s1[j];
}
for (start = 0; start < (n); j++, start++)
{
new_str[j] = s2[start];
}
new_str[j] = 0;
}
return (new_str);
}
