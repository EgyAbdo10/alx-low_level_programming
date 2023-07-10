#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of the same char
 * @size: the size of the array
 * @c: the char repeated
 * Return: the final string on success
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i = 0;
str = malloc(size);
if (str == NULL || size == 0)
{
return (NULL);
}
while (i < size)
{
str[i] = c;
i++;
}
str[i] = 0;
return (str);
}
