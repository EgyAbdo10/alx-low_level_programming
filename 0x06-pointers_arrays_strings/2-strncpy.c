#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies a string into another one
 * @dest: first str
 * @src: second str
 * @n: number of bytes taken from src
 * Return: the concatenated pointer str
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
while(j < n)
{
dest[j] = src[j];
j++;
}
return (dest);
}
