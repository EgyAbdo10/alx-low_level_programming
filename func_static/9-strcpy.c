#include "main.h"
/**
 * _strcpy - reverse string
 * @src: the integer array
 * @dest: the number of elements
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
int i = 0;
while (src[len] != '\0')
{
len++;
}
while (i <= len)
{
dest[i] = src[i];
i++;
}
return (dest);
}
