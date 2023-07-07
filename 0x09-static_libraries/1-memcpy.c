#include "main.h"
/**
 * _memcpy - blabla
 * @dest: first
 * @src: second
 * @n: third
 * Return: dest after modification
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
